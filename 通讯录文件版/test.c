#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu() {
	printf("****   通信录系统   ****\n");
	printf("****1,ADD    2,DEL  ****\n");
	printf("****3,SER    4,MOD  ****\n");
	printf("****5,SORT   6,PRINT****\n");
	printf("****0,EXIT          ****\n");
	printf("************************\n");
}

void test() {
	int input = 0;
	contact con;//创建通信录对象
	init(&con);//初始化这个通信录
	do {
		menu();
		printf("请进行选择>>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			ADDinfo(&con);
			Sleep(3000);
			system("cls");
			break;
		case DEL:
			//要删除，得先找到你想删除的人,所以删除函数里面得有一个查找函数
			DELinfo(&con);
			Sleep(3000);//控制3秒会清屏一次，让屏幕输出看起来不冗杂
			system("cls");
			break;
		case SER:
			SERinfo(&con);
			Sleep(3000);
			system("cls");
			break;
		case MOD:
			MODinfo(&con);
			Sleep(3000);
			system("cls");
			break;
		case SORT:
			SORTinfo(&con);//这里排序我们就按照年龄大小来排序
			Sleep(3000);
			system("cls");
			break;
		case PRINT:
			PRINTinfo(&con);
			Sleep(3000);
			system("cls");
			break;
		case EXIT:
			SAVEcontact(&con);//销毁前先保存数据到文件中
			DELcontact(&con);//退出就销毁通信录，也就是销毁申请的空间
			printf("退出通信录!\n");
			break;
		default:
			printf("输入有误，请重新输入!\n");
			break;
		}

	} while (input);
}
int main() {
	test();
	return 0;
}