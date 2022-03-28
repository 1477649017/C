#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int** test() {
	int arr[] = { 1,2 };
	int* p = arr;
	*p = 2;
	return &p;
}
int main() {
	int** ret = test();
	printf("%d\n", **ret);
	printf("%d\n", **ret);
}