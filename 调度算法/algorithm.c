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


//定义FCFS函数
void FCFS(ret) {
	struct JOB job1[20] = { 0 };
	memmove(job1, job, sizeof(job));
	for (int i = 0;i < ret;i++) {
		printf("现在正在调用 %c 作业\n", job1[i].homname);
		if (i < ret - 1) {
			printf("此时后被队列为:");
		}
		else {
			printf("后备队列为空!\n");
		}
		
		for (int j = i + 1;j < ret;j++) {
			printf("%c ", job1[j].homname);
		}
		printf("\n");
	}
	printf("调度完成，整体调度各个阶段时间详细过程如下:\n");
	for (int i = 0;i < ret;i++) {
		//计算完成时间
		if (i == 0) {
			job1[i].fintime = job1[i].arrtime + job1[i].sertime;
		}
		else {
			job1[i].fintime = job1[i - 1].fintime + 1 + job1[i].sertime;
		}
		//计算开始时间
		if (i == 0) {
			job1[0].strtime = 0;
		}
		else {
			job1[i].strtime = job1[i - 1].fintime + 1;
		}
		//计算周转时间
		job1[i].wattime = job1[i].fintime - job1[i].arrtime;
		//计算带权周转时间
		job1[i].tatime = (float)job1[i].wattime / job1[i].sertime;
	
	}
	
	//输出展示
	printf("作业名    到达时间     服务时间    开始时间    完成时间    周转时间    带权周转时间\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job1[i].homname, job1[i].arrtime, job1[i].sertime, job1[i].strtime, job1[i].fintime, job1[i].wattime, job1[i].tatime);
	}
	int allwattime = 0;//周转时间之和
	float alltatime = 0;//带权周转时间之和
	for (int i = 0; i < ret; i++) {
		allwattime += job1[i].wattime;
		alltatime += job1[i].tatime;
	}

	printf("\n平均作业周转时间：%0.2f ms", (float)allwattime / ret);
	printf("\n平均作业带权周转时间：%0.2f ms\n", alltatime / ret);
	printf("\n");

}

//定义SJF函数
void SJF(ret) {
	struct JOB job2[20] = {0};
	memmove(job2, job, sizeof(job));
	for (int i = 0;i < ret;i++) {
		//进来先检查相邻两个作业的到达时间是不是一样的，如果是一样的，就需要进行服务时间的比较了
		if (job2[i].arrtime == job2[i + 1].arrtime) {
			if (job2[i].sertime > job2[i + 1].sertime) {
				struct JOB tmp = job2[i];
				job2[i] = job2[i + 1];
				job2[i + 1] = tmp;
			}
		}
		//计算完成时间
		if (i == 0) {
			job2[i].fintime = job2[i].arrtime + job2[i].sertime;
		}
		else {
			job2[i].fintime = job2[i - 1].fintime + 1 + job2[i].sertime;
		}
		//计算开始时间
		if (i == 0) {
			job2[0].strtime = 0;
		}
		else {
			job2[i].strtime = job2[i - 1].fintime + 1;
		}
		//计算周转时间
		job2[i].wattime = job2[i].fintime - job2[i].arrtime;
		//计算带权周转时间
		job2[i].tatime = (float)job2[i].wattime / job2[i].sertime;
	}

	for (int i = 0;i < ret;i++) {
		printf("现在正在调用 %c 作业\n", job2[i].homname);
		if (i < ret - 1) {
			printf("此时后被队列为:");
		}
		else {
			printf("后备队列为空!\n");
		}

		for (int j = i + 1;j < ret;j++) {
			printf("%c ", job2[j].homname);
		}
		printf("\n");
	}
	printf("调度完成，整体调度各个阶段时间详细过程如下:\n");
	//输出展示
	printf("作业名    到达时间     服务时间    开始时间    完成时间    周转时间    带权周转时间\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job2[i].homname, job2[i].arrtime, job2[i].sertime, job2[i].strtime, job2[i].fintime, job2[i].wattime, job2[i].tatime);
	}
	int allwattime = 0;//周转时间之和
	float alltatime = 0;//带权周转时间之和
	for (int i = 0; i < ret; i++) {
		allwattime += job2[i].wattime;
		alltatime += job2[i].tatime;
	}

	printf("\n平均作业周转时间：%0.2f ms", (float)allwattime / ret);
	printf("\n平均作业带权周转时间：%0.2f ms\n", alltatime / ret);
	printf("\n");

}

//定义HRRN函数
void HRRN(ret) {
	struct JOB job3[20] = { 0 };
	memmove(job3, job, sizeof(job));
	
	int a = ret-1;
	int past = 0;
	for (int i = 0;i < ret;i++) {
		//计算响应比，以最后一个作业的完成时间作为标准
		float Responseratio[6] = { 0 };
		float max = 0;
		for (int j = 0;j < ret;j++) {
			if (job3[j].strtime == 0) {
				if (i == 0) {
					Responseratio[j] = (job3[a].arrtime - job3[j].arrtime + job3[j].sertime) / (float)job3[j].sertime;
				}
				else {
					Responseratio[j] = (job3[a].fintime - job3[j].arrtime + job3[j].sertime) / (float)job3[j].sertime;
				}
			}
			if (Responseratio[j] > max) {
				max = Responseratio[j];
			}
		}
		
		for (int j = 0;j < ret;j++) {
			if (max == Responseratio[j]) {
				a = j;
			}
		}
		//响应比最高的开始执行
		int tmp = a;
		if (i == 0) {
			job3[tmp].strtime = job3[ret - 1].arrtime + 1;
		}
		else {
			job3[tmp].strtime = job3[past].fintime + 1;
		}
		
		job3[tmp].fintime = job3[tmp].strtime + job3[tmp].sertime;
		//计算周转时间
		job3[tmp].wattime = job3[tmp].fintime - job3[tmp].arrtime;
		//计算带权周转时间
		job3[tmp].tatime = (float)job3[tmp].wattime / job3[tmp].sertime;
		past = a;
		printf("现在正在调度 %c 作业\n", job3[a].homname);
		if (i < ret - 1) {
			printf("此时后被队列为:");
		}
		else {
			printf("后备队列为空!\n");
		}
		for (int j = 0;j < ret;j++) {
			if (job3[j].strtime == 0) {
				printf("%c ", job3[j].homname);
			}
		}
		printf("\n");
	}

	printf("调度完成，整体调度各个阶段时间详细过程如下:\n");
	//输出展示
	printf("作业名    到达时间     服务时间    开始时间    完成时间    周转时间    带权周转时间\n");
	for (int i = 0;i < ret;i++) {
		printf("%3c%12d%12d%12d%12d%12d%12.2f\n", job3[i].homname, job3[i].arrtime, job3[i].sertime, job3[i].strtime, job3[i].fintime, job3[i].wattime, job3[i].tatime);
	}
	int allwattime = 0;//周转时间之和
	float alltatime = 0;//带权周转时间之和
	for (int i = 0; i < ret; i++) {
		allwattime += job3[i].wattime;
		alltatime += job3[i].tatime;
	}

	printf("\n平均作业周转时间：%0.2f ms", (float)allwattime / ret);
	printf("\n平均作业带权周转时间：%0.2f ms\n", alltatime / ret);
	printf("\n");

}