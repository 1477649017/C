#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("****** 三子棋小游戏 ******\n");
	printf("******    1,play    ******\n");
	printf("******    0,exit    ******\n");
	printf("**************************\n");
}

void game() {
	char ret = 0;
	//1，定义一个下棋的棋盘
	char board[ROW][COL] = { 0 };
	//2,初始化棋盘为全部空格
	initboard(board, ROW, COL);
	//3,打印棋盘边框
	displayboard(board,ROW,COL);
	while (1) {
		//4,玩家下棋
		player_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//判断输赢的函数
		if (ret != 'c') {
			break;
		}//如果不是q,就说明有人赢了或者就是平局，退出
		//5，电脑下棋
		computer_move(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = is_win(board, ROW, COL);//判断输赢的函数
		if (ret != 'c') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢\n");
	}
	else if (ret == '#') {
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}
	
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入你的选择>>\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!");
			break;
		default:
			printf("输入错误，请重新输入>>\n");
			break;
		}
	} while (input);
	return 0;
}