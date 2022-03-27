#pragma once
#include<string.h>
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<Windows.h>
//头文件包含函数的声明 与 类型的声明

//宏定义将后面的一些具体数字进行替换，是代码后期便于更改维护
#define MAX 1000
#define name_max 20
#define sex_max 3
#define phone_max 12
#define address_max 30

//联系人具体信息结构体的声明
typedef struct perinfo {
	char name[name_max];
	int age;
	char sex[sex_max];
	char phone[phone_max];
	char address[address_max];
}perinfo;

//通信录结构体的声明
typedef struct contact {
	perinfo date[MAX];//定义了一个结构体数组，数组的每一个元素都是一个结构体类型，包含很多的成员属性，也就是具体的一个联系人的所有信息
	int sz;//用来记录通信录里面的人数
}contact;

//枚举类型的声明，因为case后面的数字不能很好的直接与功能挂上钩，所以对于我们的选择可以定义一个枚举类型，然后将case后的数字换成具体的功能的名字
//增加代码的可读性
enum option {
	EXIT,
	ADD,
	DEL,
	SER,
	MOD,
	SORT,
	PRINT,
};


//函数声明
//初始化函数
void init(contact* pc);
//添加函数
void ADDinfo(contact* pc);
//查找函数(此查找函数只是单纯找到人返回下标)
int ser_byname(const contact* pc);//只是查找，不会对指针指向的内容进行修改，用const修饰一下
//删除函数
void DELinfo(contact* pc);
//打印函数
void PRINTinfo(const contact* pc);
//查找函数
void SERinfo(const contact* pc);
//修改函数
void MODinfo(contact* pc);
//排序函数
void SORTinfo(contact* pc);
//比较函数
int comparestu(const void* e1, const void* e2);
