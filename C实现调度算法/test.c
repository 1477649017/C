#define  _CRT_SECURE_NO_WARNINGS 1
#include "algorithm.h"
void menu() {
	printf("=====       调度算法选择       =====\n");
	printf("=====    1,先来先服务(FCFS)    =====\n");
	printf("=====    2,短作业优先(SJF )    =====\n");
	printf("=====    3,高响应比算法(HRRN)  =====\n");
	printf("=====    0,退出系统            =====\n");
}
struct JOB job[20] = { 0 };

int main() {
	int ret = readfile();
	int input = 0;
	do {
		menu();
		printf("请进行算法的选择>>\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			FCFS(ret);
			break;
		case 2:
			SJF(ret);
			break;
		case 3:
			//HRRN();
			break;
		case 0:
			printf("退出系统!\n");
			break;
		default:
			printf("选择错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}