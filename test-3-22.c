#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include "ADD.h"
#pragma comment(lib,"ADD.lib")//导入静态库
//int main() {
//	int a = 10;
//	int b = 10;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//int main() {
//	int n = 5;
//	int sum = 1;
//	while (n) {
//		sum *= n;
//		n = n - 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main() {
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1;i <= 3;i++) {
//		ret *= i;
//		sum += ret;
//
//	}
//	printf("%d\n", sum);
//
//
//
//	return 0;
//}
//递归实现正向输出一个四位数
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char* p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}