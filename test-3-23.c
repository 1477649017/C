#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//strtok()
//int main() {
//	char arr[] = "xiaoming666@qq.com";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//	const char* sep = "@.";
//	char* str = 0;
//	for (str = strtok(buf, sep);str != NULL;str = strtok(NULL, sep)) {
//		printf("%s\n", str);
//	}
//	return 0;
//}

//strerror()
//错误码 errno 是一个全局变量
//很典型的错误码 404
//int main() {
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	return 0;
//}
//#include<errno.h>
//#include<limits.h>
//#include<stdlib.h>
//int main() {
//	int* p = (int*)malloc(INT_MAX);//malloc函数是向堆区申请内存的，如果开辟不成功就会返回空指针，否则就是空间的起始地址
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	int arr[1] = { 1 };
//	perror("arr");
//	return  0;
//} 
//#include<ctype.h>
//int main() {
//	/*int i = 20;
//	int ret = iscntrl(i);
//	if (ret) {
//		printf("%d 是一个控制字符 %c",i,i );
//	}
//	return 0;*/
//	char ch = 'a';
//	putchar(toupper(ch));
//	
//}

//模拟实现memcpy
#include<assert.h>
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
//	int* p = (int*)my_memcpy(arr1, arr, 20);
//	printf("%d\n", *p);
//	return 0;
//}
void* my_memmove(void* dest, const void* src, size_t num) {
	assert(dest && src);
	void* ret = dest;
	if (dest <= src || (char*)dest >= ((char*)src + num)) {
		while (num--) {
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)dest + 1;
		}
	}
	else {
		while (num--) {
			*((char*)dest + num) = *((char*)src + num);

		
		}
	}
	return ret;
}
int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1, arr1 + 2, 20);
	for (int i = 0;i < 10;i++) {
		printf("%d ",arr1[i]);
	}
	return 0;
}