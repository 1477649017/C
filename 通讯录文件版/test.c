#define  _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void menu() {
	printf("****   ͨ��¼ϵͳ   ****\n");
	printf("****1,ADD    2,DEL  ****\n");
	printf("****3,SER    4,MOD  ****\n");
	printf("****5,SORT   6,PRINT****\n");
	printf("****0,EXIT          ****\n");
	printf("************************\n");
}

void test() {
	int input = 0;
	contact con;//����ͨ��¼����
	init(&con);//��ʼ�����ͨ��¼
	do {
		menu();
		printf("�����ѡ��>>");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			ADDinfo(&con);
			Sleep(3000);
			system("cls");
			break;
		case DEL:
			//Ҫɾ���������ҵ�����ɾ������,����ɾ�������������һ�����Һ���
			DELinfo(&con);
			Sleep(3000);//����3�������һ�Σ�����Ļ���������������
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
			SORTinfo(&con);//�����������ǾͰ��������С������
			Sleep(3000);
			system("cls");
			break;
		case PRINT:
			PRINTinfo(&con);
			Sleep(3000);
			system("cls");
			break;
		case EXIT:
			SAVEcontact(&con);//����ǰ�ȱ������ݵ��ļ���
			DELcontact(&con);//�˳�������ͨ��¼��Ҳ������������Ŀռ�
			printf("�˳�ͨ��¼!\n");
			break;
		default:
			printf("������������������!\n");
			break;
		}

	} while (input);
}
int main() {
	test();
	return 0;
}