#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//I like beijing.
//最终输出 beijing. like I
//void reverse(char* left, char* right ) {
//	while (left < right) {
//		char* tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[100] = {0};
//	gets(arr);
//	int sz = strlen(arr);
//	reverse(arr,arr + sz - 1);//第一次逆序，将整个句子逆序
//	char* cur = arr;
//	char* str = arr;
//
//	//方法1：
//	/*while (*cur != '\0') {
//		if (*cur == ' ') {
//			reverse(str, cur - 1);
//			str = cur + 1;
//		}
//		cur++;
//	}*/
//
//	//方法2：
//	while (*cur != '\0') {
//		while (*cur != ' ' && *cur != '\0') {
//			cur++;
//		}
//		reverse(str, cur - 1);//第二次逆序，将每个单词逆序
//		str = cur + 1;
//		if (*cur != '\0') {
//			cur++;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//模拟实现strncat
//void my_strncat(char* dest,const char* src,int sz) {
//	assert(dest && src);
//	while (*dest != '\0') {
//		dest++;
//	}//先找到目标空间的\0的位置
//	int len = strlen(src);
//	if (len >= sz) {
//		for (int i = 0;i < sz;i++) {
//			*dest = *src;
//			dest++;
//			src++;
//		}
//		*dest = '\0';
//	}
//	else {
//		for (int i = 0;i < len;i++) {
//			*dest = *src;
//			dest++;
//			src++;
//		}
//		*dest = '\0';
//	}
//}
//int main() {
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	//假如追加的个数是5个
//	my_strncat(arr1,arr2,5);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strncpy
//void my_strncpy(char* dest,const char* src,int sz) {
//	int len = strlen(src);
//	if (len >= sz) {
//		for (int i = 0;i < sz;i++) {
//			*dest = *src;
//			dest++;
//			src++;
//		}
//	}
//	else {
//		for (int i = 0;i < len;i++) {
//			*dest = *src;
//			dest++;
//			src++;
//		}
//		for (int i = len;i < sz;i++) {
//			*dest = '\0';
//			dest++;
//		}
//	}
//}
//int main() {
//	char arr1[] = "abcdefgtyu";
//	char arr2[] = "zxcvvb";
//	int cpy_len = 0;
//	scanf("%d", &cpy_len);
//	my_strncpy(arr1,arr2,cpy_len);
//	printf("%s\n", arr1);
//	return 0;
//}

//冒泡排序
//void Bubblesort(int* arr, int sz) {
//	for (int i = 0;i < sz - 1;i++) {
//		for (int j = 0;j < sz - 1 - i;j++) {
//			if (*(arr + j) >  *(arr + j + 1)) {
//				int tmp = *(arr + j);
//				*(arr + j) = *(arr + j + 1);
//				*(arr + j + 1) = tmp;
//			}
//			/*if (arr[j] > arr[j + 1]) {
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			
//			}*/
//			
//		}
//	
//	}
//
//}
//int main() {
//	int arr[7] = { 1,3,4,5,2,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr,sz);
//	for (int i = 0;i < sz;i++) {
//		printf("%d ", arr[i]);
//	}
//}
//void init(int* arr) {
//	memset(arr, 0, 40);
//}
//void print(int* arr) {
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//void reverse(int* arr) {
//	int* left = arr;
//	int* right = arr + 9;
//	while (left < right) {
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	int arr[10];
//	init(arr);
//	print(arr);
//	for (int i = 0;i < 10;i++) {
//		arr[i] = i;
//	}
//	reverse(arr);
//	print(arr);
//	return 0;
//}
void swap(int* arr1,int* arr2) {
	int i = 0;
	while (i < 5) {
		int tmp = *(arr1 + i);
		*(arr1 + i) = *(arr2 + i);
		*(arr2 + i) = tmp;
		i++;
	}
}
int main() {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	swap(arr1, arr2);
	for (int i = 0;i < 5;i++) {
		printf("%d ", arr1[i]);
	}
	return 0;
}