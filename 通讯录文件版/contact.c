#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//函数实现
//初始化函数实现
//void init(contact* pc) {
//	assert(pc);
//	pc->lim_size = size_max;//size_max是最初通信录能存储的最大容量
//	pc->sz = 0;
//	pc->date = (perinfo*)malloc(pc->lim_size * sizeof(perinfo));//malloc申请空间，将空间地址传给联系人的结构体指针
//	if (pc->date == NULL) {
//		perror("init::malloc");//如果malloc返回空指针则是开辟失败
//		return;
//	}
//	memset(pc->date, 0, pc->lim_size * sizeof(perinfo));//将开辟的空间初始化为0
//}

//容量检查函数
void check_capacity(contact* pc) {
	if (pc->sz == pc->lim_size) {
		perinfo* tmp = (perinfo*)realloc(pc->date, (pc->lim_size + 2) * sizeof(perinfo));
		if (tmp != NULL) {
			printf("扩容成功!\n");
			pc->date = tmp;
			pc->lim_size += 2;
		}
		else {
			perror("check_capacity::realloc");
		}
	}
}
void LOADcontact(contact* pc) {
	assert(pc);
	//打开文件
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL) {
		perror("LOADcontact::fopen");
		return;
	}
	//读文件
	perinfo tmp = { 0 };//定义一个中间结构体来临时存放数据
	while (fread(&tmp, sizeof(perinfo), 1, pf)) {//每次我们期望最多读一个数据，当读完后再没有数据读时，就会返回实际读的个数0
		check_capacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}

//初始化函数实现(文件读取版)
void init(contact* pc) {
	assert(pc);
	pc->lim_size = size_max;//size_max是最初通信录能存储的最大容量
	pc->sz = 0;
	pc->date = (perinfo*)malloc(pc->lim_size * sizeof(perinfo));//malloc申请空间，将空间地址传给联系人的结构体指针
	if (pc->date == NULL) {
		perror("init::malloc");//如果malloc返回空指针则是开辟失败
		return;
	}
	memset(pc->date, 0, pc->lim_size * sizeof(perinfo));//将开辟的空间初始化为0

	//加载文件信息
	LOADcontact(pc);
}


//销毁通信录
void DELcontact(contact* pc) {
	free(pc->date);
	pc->date = NULL;
	pc->lim_size = 0;
	pc->sz = 0;
	printf("已销毁!\n");
}



//注意，因为静态版用的是数组，所以保留了很多[]的访问方式，但是对于动态版而言也是适用的，因为动态版使用的是指针，下标就相当于地址偏移量
//所以[]的方式本质就是加上偏移量并解引用
//添加函数
void ADDinfo(contact* pc) {
	assert(pc);
	check_capacity(pc);//容量检查函数，满了就增容
	printf("请输入联系人姓名>>\n");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入联系人年龄>>\n");
	scanf("%d", &(pc->date[pc->sz].age));//这里要注意，因为其他属性都是用数组存储的，所以数组名就是地址，而age是需要取地址才行的
	printf("请输入联系人性别>>\n");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入联系人电话>>\n");
	scanf("%s", pc->date[pc->sz].phone);
	printf("请输入联系人地址>>\n");
	scanf("%s", pc->date[pc->sz].address);

	pc->sz++;
	printf("添加成功!\n");
	return;
}

//查找函数
int ser_byname(const contact* pc, char* sername) {
	assert(pc);
	for (int i = 0;i < pc->sz;i++) {
		if (0 == strcmp(pc->date[i].name, sername)) {
			return i;//找到了就返回下标
		}
	}
	return -1;//最终找不到就返回-1
}

//删除函数
void DELinfo(contact* pc) {
	assert(pc);
	if (pc->sz == 0) {
		printf("通信录已经为空，无法删除!");
		return;
	}
	//1,先找到
	char delname[name_max] = { 0 };
	printf("请输入你要删除的联系人的名字>>\n");
	scanf("%s", &delname);
	int ret = ser_byname(pc, delname);
	if (ret == -1) {
		printf("查无此人，无法进行删除!\n");
		return;
	}
	//2，删除
	for (int j = ret;j < (pc->sz - 1);j++) {
		pc->date[j] = pc->date[j + 1];
	}
	pc->sz--;
	printf("删除成功!\n");
}

//打印函数
void PRINTinfo(const contact* pc) {
	assert(pc);
	printf("%-10s %-10s %-10s %-12s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (int i = 0;i < pc->sz;i++) {
		printf("%-10s %-10d %-10s %-12s %-20s\n", pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].phone, pc->date[i].address);
	}

}

//查找函数
void SERinfo(const contact* pc) {
	assert(pc);
	//1,先找到
	char sername[name_max] = { 0 };
	printf("请输入你要查找的联系人的名字>>\n");
	scanf("%s", &sername);
	int ret = ser_byname(pc, sername);//利用之前的查找函数拿到下标
	//2，输出
	if (-1 == ret) {
		printf("对不起，查无此人!\n");
		return;
	}
	else {
		printf("已找到如下相关信息>>\n");
		printf("%-10s %-10s %-10s %-12s %-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s %-10d %-10s %-12s %-20s\n", pc->date[ret].name, pc->date[ret].age, pc->date[ret].sex, pc->date[ret].phone, pc->date[ret].address);
	}
	return;
}

//修改函数
void MODinfo(contact* pc) {
	assert(pc);
	//1,先找到
	char modname[name_max] = { 0 };
	printf("请输入你要修改的联系人的人的名字>>\n");
	scanf("%s", &modname);
	int ret = ser_byname(pc, modname);//利用之前的查找函数拿到下标
	//2，修改
	if (-1 == ret) {
		printf("对不起，无法修改，此通信录下无此人!\n");
		return;
	}
	else {
		printf("请输入修改后的联系人姓名>>\n");
		scanf("%s", pc->date[ret].name);
		printf("请输入修改后的联系人年龄>>\n");
		scanf("%d", &(pc->date[ret].age));
		printf("请输入修改后的联系人性别>>\n");
		scanf("%s", pc->date[ret].sex);
		printf("请输入修改后的联系人电话>>\n");
		scanf("%s", pc->date[ret].phone);
		printf("请输入修改后的联系人地址>>\n");
		scanf("%s", pc->date[ret].address);
		printf("修改成功!\n");
	}
	return;
}

//自定义比较函数
int comparestu(const void* e1, const void* e2) {
	return ((struct perinfo*)e1)->age - ((struct perinfo*)e2)->age;//以年龄作为比较对象
}

//排序函数
void SORTinfo(contact* pc) {
	//这里的排序我们可以用qsort来实现
	qsort(pc->date, pc->sz, sizeof(pc->date[0]), comparestu);
	printf("排序完毕，可使用打印查看!\n");
}

//保存函数
void SAVEcontact(const contact* pc) {
	assert(pc);
	//二进制方式打开文件
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL) {
		perror("SAVEcontact::fopen");
		return;
	}
	//写文件
	for (int i = 0;i < pc->sz;i++) {
		fwrite(pc->date+i, sizeof(perinfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}