#define  _CRT_SECURE_NO_WARNINGS 1
#include "algorithm.h"
void menu() {
	printf("=====       �����㷨ѡ��       =====\n");
	printf("=====    1,�����ȷ���(FCFS)    =====\n");
	printf("=====    2,����ҵ����(SJF )    =====\n");
	printf("=====    3,����Ӧ���㷨(HRRN)  =====\n");
	printf("=====    0,�˳�ϵͳ            =====\n");
}
struct JOB job[20] = { 0 };

int main() {
	int ret = readfile();
	int input = 0;
	do {
		menu();
		printf("������㷨��ѡ��>>\n");
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
			printf("�˳�ϵͳ!\n");
			break;
		default:
			printf("ѡ���������������!\n");
			break;
		}
	} while (input);
	return 0;
}