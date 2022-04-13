#define  _CRT_SECURE_NO_WARNINGS 1
#include "algorithm.h"
extern struct JOB job[20];//声明一下这个全局变量
//定义读文件函数
int readfile() {
	//打开文件
	FILE* pf = fopen("info.txt", "r");
	if (pf == NULL) {
		perror("readfile::fopen");
		return;
	}
	//读文件
	
	//循环读取文件
	int i = 0;
	printf("作业名    作业到达时间     作业运行所需要时间\n");
	while (!feof(pf)) {//feof 如果文件已经是因为到了文件末尾而结束了，就会返回非0值
		int ch = 0;
		fscanf(pf, "%c%d%d", &job[i].homname, &(job[i].arrtime), &(job[i].sertime));
		printf("%3c%12d%15d\n", job[i].homname, job[i].arrtime, job[i].sertime);
		getc(pf);//吃掉每行后面的换行符
		i++;
	}
	printf("\n");
	//关闭文件
	fclose(pf);
	pf = NULL;
	return i;
	
}
//展示函数
void show(ret) {
	printf("作业名    到达时间     服务时间    开始时间    完成时间    周转时间    带权周转时间\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job[i].homname, job[i].arrtime, job[i].sertime, job[i].strtime, job[i].fintime, job[i].wattime, job[i].tatime);
	}
	int allwattime = 0;//周转时间之和
	float alltatime = 0;//带权周转时间之和
	for (int i = 0; i < ret; i++){
		allwattime += job[i].wattime;
		alltatime  += job[i].tatime;
	}

	printf("\n平均作业周转时间：%0.2f ms", (float)allwattime / ret);
	printf("\n平均作业带权周转时间：%0.2f ms\n", alltatime / ret);
	printf("\n");
}
//自定义比较函数
int comparestruct(const void* el1, const void* el2) {
	return ((struct JOB*)el1)->arrtime - ((struct JOB*)el2)->arrtime;
}
//定义FCFS函数
void FCFS(ret) {
	qsort(job, ret, sizeof(job[0]), comparestruct);//按照到达时间对结构体数组进行排序
	for (int i = 0;i < ret;i++) {
		printf("现在正在调用 %c 作业\n", job[i].homname);
		if (i < ret - 1) {
			printf("此时后被队列为:");
		}
		else {
			printf("后备队列为空!\n");
		}
		
		for (int j = i + 1;j < ret;j++) {
			printf("%c ", job[j].homname);
		}
		printf("调度完成!\n");
	}
	for (int i = 0;i < ret;i++) {
		//计算完成时间
		if (i == 0) {
			job[i].fintime = job[i].arrtime + job[i].sertime;
		}
		else {
			job[i].fintime = job[i - 1].fintime + 1 + job[i].sertime;
		}
		//计算开始时间
		if (i == 0) {
			job[0].strtime = 0;
		}
		else {
			job[i].strtime = job[i - 1].fintime + 1;
		}
		//计算周转时间
		job[i].wattime = job[i].fintime - job[i].arrtime;
		//计算带权周转时间
		job[i].tatime = (float)job[i].wattime / job[i].sertime;
	
	}
	show(ret);
}

//定义SJF函数
void SJF(ret) {


}