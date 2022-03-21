#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//模拟实现strstr()函数
char* my_strstr(const char* str1,const char* str2) {
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cur = str1;
	while (*cur) {
		s2 = str2;
		s1 = cur;
		while (*s1 && *s2 && *s1 == *s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return (char*)cur;
		}
		cur++;
	}
	return NULL;

}
int main() {
	char arr1[] = "abccdefgthu";
	char arr2[] = "cdef";
	char *ret = my_strstr(arr1, arr2);
	if (NULL == ret) {
		printf("找不到字串");
	}
	else {
		printf("%s\n", ret);
	}
	return 0;
}
