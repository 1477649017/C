#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//enum Color//��ɫ
//{
//	RED = 1,
//	GREEN = 2,
//	BLUE
//};
//int main() {
//	printf("%d ", RED);
//	printf("%d ", GREEN);
//	printf("%d ", BLUE);
//	return 0;
//}
//typedef union Un
//{
//	char c;
//	int i;
//}uu;
//int check_sys() {
//	uu u;
//	u.i = 1;
//	return u.c;
//}
//int main() {
//	int ret = check_sys();
//	if (1 == ret ) {
//		printf("С��");
//	}
//	else {
//		printf("���");
//	}
//}
//int main() {
//	union Un u;
//	printf("%u\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	return 0;
//}
//union Un
//{
//	short arr[7];
//	int i;
//}u;
//int main() {
//	printf("%u\n", sizeof(u));
//}

//��д��������������ʱ���������ַ����ĳ��ȡ�
//˼·���������õݹ飬���ȿ���һ���ַ��ǲ���\0�����ǾͰ�ָ�������ƶ�һ���ַ���ǰ�����1,������һֱ�ݹ���ȥ��ֱ�������\0
//1 + my_strlen("bcd")
//1 + 1 + my_strlen("cd")
//1 + 1 + 1 + my_strlen("d")
//1 + 1 + 1 + 1 + my_strlen("") 
//1 + 1 + 1 + 1 + 0
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "abcd";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//}
//
////�ݹ���׳�
//int func(int n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * func(n - 1);
//	}
//}
////�ǵݹ���׳�
//int func1(int n) {
//	int ret = 1;
//	for (int i = 1;i <= n;i++) {
//		ret *= i;
//	}
//	return ret;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	//int ret = func(n);
//	int ret = func1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//���n��쳲����������������������
//int fib(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int fib1(int n) {
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	int ret1 = fib1(n);
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return  0;
//}

//�ݹ�ʵ�����һ������ÿһλ
//void print(int n) {
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main() {
//	int n = 1234;
//	print(n);
//	return 0;
//}

////�ݹ�ʵ���ַ�������
//void reverse_string(char* string,int sz) {
//	if (sz >= 2) {
//		char tmp = *string;
//		*string = *(string + sz - 1);
//		*(string + sz - 1) = tmp;
//		reverse_string(string + 1, sz - 2);
//	}
//	return;
//
//}
//int main() {
//	char arr[] = "abcdef";
//	reverse_string(arr,6);
//	printf("%s\n", arr);
//	return 0;
//}

//�ݹ�ʵ��һ������λ֮��
//int DigitSum(n) {
//	if (n) {
//		return DigitSum(n / 10) + n % 10;
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
//int func(int n,int k) {
//	if (k > 0) {
//		return n * func(n, k - 1);
//	}
//	else {
//		return 1;
//	}
//}
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = func(n, k);
//	printf("%d\n", ret);
//	return 0;
//}