#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
//����һ����ҵJCB���͵Ľṹ�壬������Ӧ�������
struct JOB {
	char homname;
	int arrtime;//����ʱ��
	int sertime;//����ʱ��
	int strtime;//��ʼʱ��
	int fintime;//���ʱ��
	int wattime;//��תʱ��
	float tatime;//��Ȩ��תʱ��
};//����һ���ṹ�����飬�����ÿһ����ҵ��JCB��Ϣ;

//�������ļ�����
int readfile();
//����FCFS����
void FCFS(ret);
//����SJF����
void SJF(ret);
//����HRRN����
void HRRN(ret);