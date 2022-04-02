#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main() {
//	char arr1[] = "abcdef";//待旋转的字符串
//	char arr2[] = "efabcd";//比较的字符串
//	int sz = strlen(arr1);
//	int count = 0;
//	while (1) {
//		char tmp = 0;
//		tmp = *arr1;
//		for (int i = 0;i < sz - 1;i++) {
//			*(arr1 + i) = *(arr1 + i + 1);
//		}
//		*(arr1 + sz - 1) = tmp;
//		count++;
//		if (0 == strcmp(arr1, arr2)) {
//			break;
//		}
//	}
//	printf("经过 %d 次左旋\n", count);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//上面的这种方法是最基础的版本，但是有缺点，因为我们上面只是考虑了左旋，没有考虑右旋，当然左旋右旋的原理都是相同的，
//但是整体而言的话，效率不高
//下面的方法会更简单高效，直接涵盖了左旋右旋的可能结果，直接在源字符串后面追加上自己本身，就把所有可能旋转的结果包含了
//abcdefabcdef,只要看另一个是不是这个字符串的字串就知道是不是旋转得来的
int is_move(char* arr1,const char* arr2) {
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2) {
		return 0;//如果两个字符串基本长度都是不同的，那肯定不是旋转能得到另一个的
	}
	strncat(arr1,arr1,len1);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL) {
		return 0;//说明没找到匹配的子串
	}
	else {
		return 1;//找到了
	}

}
int main() {
	char arr1[30] = "abcdef";//待旋转的字符串
	char arr2[30] = "efabcd";//比较的字符串
	int ret = is_move(arr1, arr2);
	if (ret == 1) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}

}