#define  _CRT_SECURE_NO_WARNINGS 1
#include "DMA.h";
int main() {
	int t1 = 1, t2 = 2, t3 = 3, t4 = 4;
	start();
	past(t1);
	printf("t1ʱ���~~~\n");
	printf("��ҵA B C D ����ռ���.....\n");
	requireMemo("A",8);
	requireMemo("B",16);
	requireMemo("C",64);
	requireMemo("D",124);
	printf("A B C D ����ռ�ɹ�����ʱ������״̬����:\n");
	printfreemem();
	printf("=================================\n");

	past(t2);
	printf("t2ʱ���~~~\n");
	printf("��ҵCִ����ɣ�������л���.....\n");
	freeMemo("C");
	printf("��ҵC���ճɹ�����ʱ������״̬����:\n");
	printfreemem();
	printf("=================================\n");

	
	past(t3);
	printf("t3ʱ���~~~\n");
	printf("��ҵE����ռ���.....\n");
	requireMemo("E",50);
	printfreemem();
	printf("=================================\n");


	past(t4);
	printf("t4ʱ���~~~\n");
	printf("��ҵDִ����ɣ�������л���.....\n");
	freeMemo("D");
	printfreemem();
	return 0;
}