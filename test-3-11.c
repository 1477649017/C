#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main() {
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//
//	char* left = arr;
//	char* right = arr + len - 1;
//
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//int main() {
//	//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//	//例如：2 + 22 + 222 + 2222 + 22222
//	int a = 0;
//	int n = 0;
//	int k = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &n);
//	for (int i = 0;i < 5;i++) {
//		k = k * 10 + 2;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<math.h>
//int main() {
////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//	for (int i = 0;i <= 100000;i++) {
//		int count = 1;
//		int tmp = i;
//		while (tmp /= 10) {
//			count++;
//		}
//		tmp = i;
//		int sum = 0;
//		for (int j = 0;j < count;j++) {
//			sum += pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		if (sum == i) {
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//void print(int level) {
//	//输出上半部分
//	for (int i = 0;i < level;i++) {
//	//输出空格
//		for (int j = 0;j < level - (i + 1);j++) {
//			printf(" ");
//		}
//	//输出*号
//		for (int j = 0;j < (2 * i + 1);j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//输出下半部分
//	for (int i = 0;i < level - 1;i++) {
//	//输出空格
//		for (int j = 0;j < i + 1;j++) {
//			printf(" ");
//		}
//	//输出*号
//		for (int j = 0;j < (2 * (level - 1)) - (2 * i + 1);j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	//打印输出菱形
//	int level = 0;
//	printf("请输入菱形上半部分的层数>>");
//	scanf("%d", &level);
//	void (*ptf)(int) = print;
//	ptf(level);
//	return 0;
//}
//int main() {
//	int arr[3][3] = { {1,2,3},{1,2,3},{1,2,3} };
//	int(*p)[3][3] = &arr;
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			printf("%d ", *(*(*p + i) + j));
//		}
//		printf("\n");
//	}
//}
int test(int x,int y) {
	return x + y;
}
int main() {
	int a = 1;
	int b = 1;
	int (*p)(int, int) = test;
	//int ret = (*p)(a, b);
	int ret = p(a, b);
	printf("%d\n", ret);
	return 0;
}