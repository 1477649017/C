#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
//函数实现
//初始化函数实现
void init(contact *pc) {
	assert(pc);
	memset(pc->date, 0, sizeof(pc->date));//date是结构体数组的数组名，求出整个数组的大小，按字节初始化为0 
	pc->sz = 0;
}

//添加函数
void ADDinfo(contact* pc) {
	assert(pc);
	if (pc->sz == MAX) {
		printf("通信录已满，无法添加!\n");
		return;
	}
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
int ser_byname(const contact* pc,char* sername) {
	assert(pc);
	for (int i = 0;i < pc->sz;i++) {
		if (0 == strcmp(pc->date[i].name, sername)) {
			return i;//找到了就返回下标
		}
	}
	return -1;//最终找不到就返回0
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
	int ret = ser_byname(pc,delname);
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
int comparestu(const void* e1,const void* e2) {
	return ((struct perinfo*)e1)->age - ((struct perinfo*)e2)->age;//以年龄作为比较对象
}

//排序函数
void SORTinfo(contact* pc) {
	//这里的排序我们可以用qsort来实现
	qsort(pc->date, pc->sz, sizeof(pc->date[0]), comparestu);
	printf("排序完毕，可使用打印查看!\n");
}