#pragma once
#include<stdio.h>
#include<Windows.h>
#define N 10000

int n1;//���з����ĸ���
int n2;//��ҵ���ĸ���
//����ϵͳ��ʼ״̬
int initMemory;
int osMemory;
int tmp;

struct  freeMemory {
	int  len;//��������
	int start;//��ʼ��ַ
	int end;//β����ַ
	int status;//0��ʾ����
}memory[N];

struct  Job{
	char name;//��ҵ��
	int len;//��ҵ��С
	int start;//��ʼ��ַ
	int end;//β����ַ
}job[N];


//ͷ�ļ������к���������
void  start();   /* ����ϵͳ��ʼ״̬*/
void  requireMemo(char  name, int  require); /*ģ���ڴ����*/
void  freeMemo(char name);  /* ģ���ڴ����*/
void  past(int  time);  /* ģ��ϵͳ����time ʱ��*/
void  printfreemem();  /* ����ڴ����������������Ľ�㣩 */


