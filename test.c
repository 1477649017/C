#define  _CRT_SECURE_NO_WARNINGS 1
#include "DMA.h";
int main() {
	int t1 = 1, t2 = 2, t3 = 3, t4 = 4;
	start();
	past(t1);
	printf("t1时间后~~~\n");
	printf("作业A B C D 请求空间中.....\n");
	requireMemo("A",8);
	requireMemo("B",16);
	requireMemo("C",64);
	requireMemo("D",124);
	printf("A B C D 请求空间成功，此时空闲区状态如下:\n");
	printfreemem();
	printf("=================================\n");

	past(t2);
	printf("t2时间后~~~\n");
	printf("作业C执行完成，将其进行回收.....\n");
	freeMemo("C");
	printf("作业C回收成功，此时空闲区状态如下:\n");
	printfreemem();
	printf("=================================\n");

	
	past(t3);
	printf("t3时间后~~~\n");
	printf("作业E请求空间中.....\n");
	requireMemo("E",50);
	printfreemem();
	printf("=================================\n");


	past(t4);
	printf("t4时间后~~~\n");
	printf("作业D执行完成，将其进行回收.....\n");
	freeMemo("D");
	printfreemem();
	return 0;
}