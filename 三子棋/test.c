#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("****** ������С��Ϸ ******\n");
	printf("******    1,play    ******\n");
	printf("******    0,exit    ******\n");
	printf("**************************\n");
}

void game() {
	char ret = 0;
	//1������һ�����������
	char board[ROW][COL] = { 0 };
	//2,��ʼ������Ϊȫ���ո�
	initboard(board, ROW, COL);
	//3,��ӡ���̱߿�
	displayboard(board,ROW,COL);
	while (1) {
		//4,�������
		player_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//�ж���Ӯ�ĺ���
		if (ret != 'c') {
			break;
		}//�������q,��˵������Ӯ�˻��߾���ƽ�֣��˳�
		//5����������
		computer_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//�ж���Ӯ�ĺ���
		if (ret != 'c') {
			break;
		}
	}
	if (ret == '*') {
		printf("���Ӯ\n");
	}
	else if (ret == '#') {
		printf("����Ӯ\n");
	}
	else {
		printf("ƽ��\n");
	}
	
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("���������ѡ��>>\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!");
			break;
		default:
			printf("�����������������>>\n");
			break;
		}
	} while (input);
	return 0;
}