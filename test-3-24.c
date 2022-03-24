#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void* my_memmove(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src ) {
//		//从前往后拷贝
//		while (num--) {
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else {
//		//从后往前拷贝
//		while (num--) {
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main() {
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[10] = { 6,7,8,9,10,6,7,8,9,10 };
//	my_memmove(arr1, arr1 + 2, 20);
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,0x22331105 };
//	int ret = memcmp(arr1, arr2, 20);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {
//	char arr[] = "abcd\0efgh";
//	char arr1[10] = { 0 };
//
//	memcpy(arr1,arr,8);
//	return 0;
//}
//模拟实现memcpy，函数返回值是目标空间的起始地址
//void* my_memcpy(void* dest, const void* src, size_t num) {
//	assert(dest && src);
//	void* ret = dest;
//	while (num--) {
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[5] = { 0 };
//	my_memcpy(arr1, arr, 20);
//	for (int i = 0;i < 5;i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//typedef struct Node
//{
//	int data;
//    struct Node* next;
//}Node;
//int main() {
//
//
//
//}