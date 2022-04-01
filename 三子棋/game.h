#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//游戏函数声明
//初始化棋盘函数
void initboard(char(*board)[COL],int row,int col);
//打印棋盘函数
void displayboard(char(*board)[COL], int row, int col);
//玩家下棋函数
void player_move(char(*board)[COL],int row,int col);
//电脑下棋
void computer_move(char(*board)[COL],int row,int col);
//判断输赢
char is_win(char(*board)[COL], int row, int col);