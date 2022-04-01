#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��Ϸ����ʵ��
//��ʼ�����̺���
void initboard(char (*board)[COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			board[i][j] = ' ';
		}
	}
}
//��ӡ���̺���
void displayboard(char(*board)[COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		//��ӡԪ��
		for (int j = 0;j < col;j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�зָ���
		for (int j = 0;j < col;j++) {
			printf("---");
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");

	}

}

//������庯��
void player_move(char(*board)[COL], int row, int col) {
	printf("���������\n");
	int x = 0;
	int y = 0;
	while (1) {
		printf("����������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�������ѱ�ռ��,����������:>\n");
			}
		
		}
		else {
			printf("����Ƿ�,����������:>\n");
		}
	}
}

//��������
void computer_move(char(*board)[COL], int row, int col) {
	printf("����������\n");
	while (1) {
		int x = rand() % row;//0-2����
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
				return 0;//�������пո���������δ��������ƽ��
			}
		}
	}
	return 1;//ƽ�ַ���1
}
char is_win(char(*board)[COL], int row, int col) {
	//�����ж���Ӯ
	// ���Ӯ���� *
	// ����Ӯ���� #
	// ƽ�ַ��� 'q'
	// ������Ϸ���� 'c'
	//�ж���
	for (int i = 0;i < row;i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];//һ����ȵ��ǲ��ǿո�ֱ�ӷ��������ȵ��ַ�������Ӯ�ж�
		}
	}
	//�ж���
	for (int i = 0;i < row;i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return board[1][i];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
		return board[0][2];
	}
    //�ж�ƽ��
	if (is_full(board,row,col) == 1) {
		return 'q';//ƽ�ַ���q
	}
	return 'c';//�������㣬��Ϸ����
}