#pragma once
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<Windows.h>
//ͷ�ļ��������������� �� ���͵�����

//�궨�彫�����һЩ�������ֽ����滻���Ǵ�����ڱ��ڸ���ά��
#define MAX 1000
#define name_max 20
#define sex_max 3
#define phone_max 12
#define address_max 30

//��ϵ�˾�����Ϣ�ṹ�������
typedef struct perinfo {
	char name[name_max];
	int age;
	char sex[sex_max];
	char phone[phone_max];
	char address[address_max];
}perinfo;

//ͨ��¼�ṹ�������
typedef struct contact {
	perinfo date[MAX];//������һ���ṹ�����飬�����ÿһ��Ԫ�ض���һ���ṹ�����ͣ������ܶ�ĳ�Ա���ԣ�Ҳ���Ǿ����һ����ϵ�˵�������Ϣ
	int sz;//������¼ͨ��¼���������
}contact;

//ö�����͵���������Ϊcase��������ֲ��ܺܺõ�ֱ���빦�ܹ��Ϲ������Զ������ǵ�ѡ����Զ���һ��ö�����ͣ�Ȼ��case������ֻ��ɾ���Ĺ��ܵ�����
//���Ӵ���Ŀɶ���
enum option {
	EXIT,
	ADD,
	DEL,
	SER,
	MOD,
	SORT,
	PRINT,
};


//��������
//��ʼ������
void init(contact* pc);
//��Ӻ���
void ADDinfo(contact* pc);
//���Һ���(�˲��Һ���ֻ�ǵ����ҵ��˷����±�)
int ser_byname(const contact* pc);//ֻ�ǲ��ң������ָ��ָ������ݽ����޸ģ���const����һ��
//ɾ������
void DELinfo(contact* pc);
//��ӡ����
void PRINTinfo(const contact* pc);
//���Һ���
void SERinfo(const contact* pc);
//�޸ĺ���
void MODinfo(contact* pc);
//������
void SORTinfo(contact* pc);
//�ȽϺ���
int comparestu(const void* e1, const void* e2);
