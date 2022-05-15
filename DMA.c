#define  _CRT_SECURE_NO_WARNINGS 1
#include "DMA.h";
extern struct  freeMemory memory[N];
extern struct  Job job[N];
extern int n1;
extern int n2;
extern int initMemory;
extern int osMemory;

//进行相关函数的具体实现
void start() {
	n1 = 1;//初始空闲分区个数为1
	n2 = 0;//初始作业个数为0
	initMemory = 640;
	osMemory = 64;
	memory[0].start = osMemory;
	memory[0].end = initMemory;
	memory[0].len = memory[0].end - memory[0].start;
	memory[0].status = 0;
}

void requireMemo(char  name, int  require) {
	//开始分配空间
	job[n2].name = name;
	if (n2 == 0) {
		job[n2].start = memory[0].start;
	}
	else {
		job[n2].start = job[n2-1].end;
	}
	job[n2].len = require;
	job[n2].end = job[n2].start + require;
	n2++;
	//作业装入后，更新一下空闲分区
	if (n2 == 1) {
		memory[n1].start = memory[0].start + require;
	}
	else {
		memory[n1].start = job[n2 - 1].end;
	}
	
	memory[n1].end = initMemory;
	memory[n1].len = memory[n1].end - memory[n1].start;
	memory[n1].status = 0;
}

void freeMemo(char name) {
	for (int i = 0;i <= n2;i++) {
		if (job[i].name == name) {
			tmp = i;
			break;
		}
	}
	n1++;
	memory[n1].start = job[tmp].start;
	memory[n1].end = job[tmp].end;
	memory[n1].len = job[tmp].len;
	memory[n1].status = 0;



}

void past(int  time) {
	Sleep(time * 1000);//模拟经过多长时间
}

void printfreemem() {
	for (int i = 1;i <= n1;i++) {
		printf("空闲分区起始地址:%d k 结束地址:%d k 分区长度:%d k 状态:%d \n", memory[i].start, memory[i].end, memory[i].len, memory[i].status);
	}
	
	
}
