#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main() {
//	char arr1[] = "abcdef";//����ת���ַ���
//	char arr2[] = "efabcd";//�Ƚϵ��ַ���
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
//	printf("���� %d ������\n", count);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//��������ַ�����������İ汾��������ȱ�㣬��Ϊ��������ֻ�ǿ�����������û�п�����������Ȼ����������ԭ������ͬ�ģ�
//����������ԵĻ���Ч�ʲ���
//����ķ�������򵥸�Ч��ֱ�Ӻ��������������Ŀ��ܽ����ֱ����Դ�ַ�������׷�����Լ������Ͱ����п�����ת�Ľ��������
//abcdefabcdef,ֻҪ����һ���ǲ�������ַ������ִ���֪���ǲ�����ת������
int is_move(char* arr1,const char* arr2) {
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2) {
		return 0;//��������ַ����������ȶ��ǲ�ͬ�ģ��ǿ϶�������ת�ܵõ���һ����
	}
	strncat(arr1,arr1,len1);
	char* ret = strstr(arr1, arr2);
	if (ret == NULL) {
		return 0;//˵��û�ҵ�ƥ����Ӵ�
	}
	else {
		return 1;//�ҵ���
	}

}
int main() {
	char arr1[30] = "abcdef";//����ת���ַ���
	char arr2[30] = "efabcd";//�Ƚϵ��ַ���
	int ret = is_move(arr1, arr2);
	if (ret == 1) {
		printf("yes\n");
	}
	else {
		printf("no\n");
	}

}