#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*char a = 0;
//	char b = 0;
//	char c = 0;*/
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	/*if (a < b) {
//		int tmp = 0;
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c) {
//		int tmp = 0;
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = 0;
//		tmp = b;
//		b = c;
//		c = tmp;
//	}*/
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
int main() {
	int a = 0;
	int b = 0;
	int m = 0;
	scanf("%d%d", &a, &b);
	while (m = a % b) {
		a = b;
		b = m;
	}
	printf("%d", b);
}

