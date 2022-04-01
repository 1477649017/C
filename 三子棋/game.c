#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//游戏函数实现
//初始化棋盘函数
void initboard(char (*board)[COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			board[i][j] = ' ';
		}
	}
}
//打印棋盘函数
void displayboard(char(*board)[COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		//打印元素
		for (int j = 0;j < col;j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		//打印行分割线
		for (int j = 0;j < col;j++) {
			printf("---");
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");

	}

}

//玩家下棋函数
void player_move(char(*board)[COL], int row, int col) {
	printf("玩家下棋中\n");
	int x = 0;
	int y = 0;
	while (1) {
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("此坐标已被占用,请重新输入:>\n");
			}
		
		}
		else {
			printf("坐标非法,请重新输入:>\n");
		}
	}
}

//电脑下棋
void computer_move(char(*board)[COL], int row, int col) {
	printf("电脑下棋中\n");
	while (1) {
		int x = rand() % row;//0-2的数
		int y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}
static int is_full(char(*board)[COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			if (board[i][j] == ' ') {
				return 0;//还发现有空格，所以棋盘未满，不是平局
			}
		}
	}
	return 1;//平局返回1
}
char is_win(char(*board)[COL], int row, int col) {
	//用来判断输赢
	// 玩家赢返回 *
	// 电脑赢返回 #
	// 平局返回 'q'
	// 继续游戏返回 'c'
	//判断行
	for (int i = 0;i < row;i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];//一行相等但是不是空格，直接返回这个相等的字符进行输赢判断
		}
	}
	//判断列
	for (int i = 0;i < row;i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return board[1][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
		return board[0][2];
	}
    //判断平局
	if (is_full(board,row,col) == 1) {
		return 'q';//平局返回q
	}
	return 'c';//都不满足，游戏继续
}