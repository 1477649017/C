#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#pragma pack(4)
//struct S1
//{
//	char c1;
//	double c2;
//};
//#pragma pack()
//int main() {
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//struct AA
//{
//	int _a;
//	int _b;
//	int _c;
//	int _d;
//};
//
//int main() {
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct AA));
//	return 0;
//}
//һ������
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main() {
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	//�ռ�����ο��ٵģ�
	printf("%d\n", sizeof(struct S));
}
