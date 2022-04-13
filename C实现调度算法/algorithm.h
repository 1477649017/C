#pragma once
#include<stdio.h>
#include<stdlib.h>
//声明一个作业JCB类型的结构体，用来对应相关数据
struct JOB {
	char homname;
	int arrtime;//到达时间
	int sertime;//服务时间
	int strtime;//开始时间
	int fintime;//完成时间
	int wattime;//周转时间
	float tatime;//带权周转时间
};//定义一个结构体数组，来存放每一个作业的JCB信息;

//声明读文件函数
int readfile();
//声明FCFS函数
void FCFS(ret);
//声明SJF函数
void SJF(ret);
//展示函数
void show(ret);