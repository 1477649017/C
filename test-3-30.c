#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main() {
//	int* ptr = (int*)malloc(40);
//	if (ptr == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0;i < 10;i++) {
//		*(ptr + i) = i;
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//int main() {
//	while (1) {
//		int* pc = (int*)malloc(1000);
//	}
//	return 0;
//}

//calloc
//int main() {
//	int* pc = (int*)calloc(10, sizeof(int));
//	if (pc == NULL) {
//		perror("calloc");
//		return 1;
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", *(pc + i));
//	}
//	free(pc);
//	pc = NULL;
//	return 0;
//}

//realloc
//int main() {
//	int* ptr = (int*)malloc(40);
//	if (ptr == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	for (int i = 0;i < 10;i++) {
//		*(ptr + i) = i;
//	}
//	int* p = (int*)realloc(ptr, 80);//将空间扩容到80个字节
//	if (p == NULL) {
//		perror("realloc");
//		return 1;
//	}
//	else {
//		ptr = p;
//		free(ptr);
//		ptr = NULL;
//		p = NULL;
//	}
//	return 0;
//
//}

//int main() {
//	char arr[] = "hehe";
//	printf("%s\n", arr);
//	printf(arr);
//
//	return 0;
//}
//int* test() {
//	int a = 10;
//	int* ptr = &a;
//	return ptr;
//}
//int main() {
//	int* ret = test();
//	printf("%p\n", ret);
//}