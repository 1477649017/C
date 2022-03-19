#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//求最小公倍数
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = b;
//	while (1) {
//		if (m % a == 0 && m % b == 0) {
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//	return 0;
//}
//#include<math.h>
//int main() {
//	for (int i = 100;i <= 200;i++) {
//		int flag = 1;//flag等于1是假设i是素数
//		for (int j = 2;j <= i/2;j++) {
//			if (i % j == 0) {
//				flag = 0;//如果i能被某个数整除，就把flag改为0，说明i不是素数
//				break;
//			}
//		}
//		if (1 == flag) {
//			printf("%d ", i);
//		}//如果说循环了一圈回来了，i还是1，那就证明了i确实是一个素数
//		
//	}
//	return 0;
//}
//int main() {
//	int count = 0;
//	for (int i = 9;i <= 99;i++) {
//		if (i % 10 == 9) {
//			count++;
//		}
//		if (i / 10 == 9) {
//			count++;
//		}
//	
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//int main() {
//	float sum = 0;
//	int flag = 1;
//	for (int i = 1;i <= 100;i++) {
//		sum += flag * (1.0 / i);
//		flag = -flag;
//		/*if (i % 2 != 0) {
//			sum += 1.0 / i;
//		}
//		else {
//			sum -= 1.0 / i;
//		}*/
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	for (int i = 1;i < 10;i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
//int main() {
//	for (int i = 1;i <= 9;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("%d * %d = %d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main() {
//	char arr1[] = "abcdefg";
//	char arr2[] = "xxxxxxxxxxxxxxx";
//	strcpy(arr2, arr1);
//
//
//	return 0;
//}
//写一个函数判断素数
//#include<math.h>
//int is_prime(int n) {
//	for (int j = 2;j <= (int)sqrt(n);j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//	}
//	return 1;//规定只要是素数，函数返回1
//}
//int main() {
//	for (int i = 100;i <= 200;i++) {
//		if (is_prime(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//写一个函数判断闰年
//int is_leapyear(int year) {
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	for (int i = 1000;i <= 2000;i++) {
//		if (is_leapyear(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//写一个函数实现整形有序数组的二分查找
//void sort(int arr[10], int k) {
//	int left = 0;
//	int right = 9;
//	while (left <= right) {
//		int mid = left + (right - left) / 2;
//		if (k > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (k < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			printf("找到了，下标是%d ", mid);
//			break;
//		}
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	sort(arr,k);
//	return 0;
//
//}
//void swap(int *p1,int *p2) {
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("交换前 %d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后 %d %d\n", a, b);
//
//}
//void print() {
//	for (int i = 1;i <= 9;i++) {
//		for (int j = 1;j <= i;j++) {
//			printf("%d * %d = %d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//}
//int main() {
//	print();
//	return 0;
//}