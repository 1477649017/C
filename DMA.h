#pragma once
#include<stdio.h>
#include<Windows.h>
#define N 10000

int n1;//空闲分区的个数
int n2;//作业区的个数
//设置系统初始状态
int initMemory;
int osMemory;
int tmp;

struct  freeMemory {
	int  len;//分区长度
	int start;//起始地址
	int end;//尾部地址
	int status;//0表示空闲
}memory[N];

struct  Job{
	char name;//作业名
	int len;//作业大小
	int start;//起始地址
	int end;//尾部地址
}job[N];


//头文件，进行函数的声明
void  start();   /* 设置系统初始状态*/
void  requireMemo(char  name, int  require); /*模拟内存分配*/
void  freeMemo(char name);  /* 模拟内存回收*/
void  past(int  time);  /* 模拟系统过了time 时间*/
void  printfreemem();  /* 输出内存空闲情况（自由链的结点） */


