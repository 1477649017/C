#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main() {
//	char arr1[10] = "abcde";
//	printf("%d\n", strlen(arr1));
//	char arr2[] = { 'a','b','c','d','e' };
//	printf("%d\n", strlen(arr2));
//	char arr3[10] = { 'a','b','c','d','e' };
//	printf("%d\n", strlen(arr3));
//	return 0;
//}
//ģ��ʵ��strlen()
//size_t my_strlen(const char* str) {
//	assert(str != NULL);//����һ�£�ȷ��strָ�벻��ΪNULL����Ȼ����ͻᱨ��
//	int count = 0;
//	while (*str != '\0') {
//		str++;
//		count++;
//	}
//	return count;
//}
//int main() {
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ģ��ʵ��strcpy
//int main() {
//	//char arr1[20] = { 0 };
//	////char arr2[10] = { 'a','b','c' };
//	////char arr3[] = "abc";
//	//char arr4[] = { 'a','b','c' };
//	//strcpy(arr1, arr4);
//	//printf("%s\n", arr1);
//	//return 0;
//	char* arr1 = "abcdfge";
//	char arr2[] = "acd";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}

//strcpy�������ص���Ŀ��ռ����ʼ��ַ
//char* my_strcpy(char* dest,const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);//������ָ������ã�����һ��ȷ��ָ�벻Ϊ��
//	char* ret = dest;
//	while (*dest++ = *src++) {
//		;
//	}
//	/*do {
//		;
//	} while (*dest++ = *src++);*/
//	return ret;
//}
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcat
//����ֵ��Ŀ��ռ����ʼ��ַ
//char* my_strcat(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;//����ʼ��ַ����һ������
//	while (*dest != '\0') {
//		dest++;
//	}//�ҵ�Ŀ��ռ����\0��λ��
//	char* ret1 = dest;//����Ŀ��ռ�\0��λ��
//	while (src != ret1) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//int main() {
//	char arr1[20] = "hello";
//	char arr2[] = " bit";
//	printf("%s\n", my_strcat(arr1, arr1));
//	return 0;
//}

//ģ��ʵ��strcmp
//int my_strcmp(const char* s1,const char* s2) {
//	assert(s1 && s2);//����������ΪNULL����Ȼ���Ǽ�
//	while (*s1 == *s2) {//��������ַ���ȣ����ǾͰ�ָ����ƣ�����Ƚ�
//		if (*s1 == '\0') {
//			return 0;//�������ָ���������ȣ��Ҷ���\0���Ǿ�˵�������ַ������Ƚ����˵���ĩβ������ȣ��Ǿ�����ȵ��ַ���
//		}
//		s1++;
//		s2++;
//	}
//	if (*s1 < *s2) {
//		return -1;
//	}
//	else if (*s1 > *s2) {
//		return 1;
//	}
//}
//int main() {
//	char arr1[] = "abcde";
//	char arr2[] = "abgth";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0) {
//		printf("arr1>arr2\n");
//	}
//	else if (ret == 0) {
//		printf("arr1 == arr2\n");
//	}
//	else if (ret < 0) {
//		printf("arr1<arr2\n");
//	}
//	return 0;
//}

//strncpy()
//����ֵ��Ŀ��ռ���׵�ַ
//int main() {
//	char arr1[] = "abcdefgt";
//	char arr2[] = "wxyz";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat()
//int main() {
//	char arr1[20] = "acbddv";
//	char arr2[] = "xyz";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strnamp()
int main() {
	char arr1[] = "abcderf";
	char arr2[] = "abcdzdd";
	int ret = strcmp(arr1, arr2);
	int ret1 = strncmp(arr1, arr2,4);
	printf("%d\n", ret);
	printf("%d\n", ret1);
	return 0;
}