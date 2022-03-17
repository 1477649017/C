#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	////二维数组
//	//int a[3][4] = { 0 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(a[0][0]));
//	//printf("%d\n", sizeof(a[0]));
//	//printf("%d\n", sizeof(a[0] + 1));
//	//printf("%d\n", sizeof(*(a[0] + 1)));
//	//printf("%d\n", sizeof(a + 1));
//	//printf("%d\n", sizeof(*(a + 1)));
//	//printf("%d\n", sizeof(&a[0] + 1));
//	//printf("%d\n", sizeof(*(&a[0] + 1)));
//	//printf("%d\n", sizeof(*a));
//	//printf("%d\n", sizeof(a[3]));
//
//
//	return 0;
//}
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	return 0;
}
