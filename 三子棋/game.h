#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//��Ϸ��������
//��ʼ�����̺���
void initboard(char(*board)[COL],int row,int col);
//��ӡ���̺���
void displayboard(char(*board)[COL], int row, int col);
//������庯��
void player_move(char(*board)[COL],int row,int col);
//��������
void computer_move(char(*board)[COL],int row,int col);
//�ж���Ӯ
char is_win(char(*board)[COL], int row, int col);