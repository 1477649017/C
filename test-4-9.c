#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	printf("hehe\n");
//	return 0;
//}

int main() {
	for (int i = 0;i < 10;i++) {
		printf("file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	}
	return 0;
}