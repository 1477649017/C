#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int my_atoi(const char* str) {
//	int n = 0;
//	while (*str) {
//		n = n * 10 + *str - '0';//*str��ȡ�����������ַ�����ȥ�ַ�0���ܹ��õ���Ӧ��ֵ '3' - '0' = 51 - 48 = 3 ASCII��ֵ�����Ӧ��
//		str++;
//	}
//	return n;
//}
//������������֣��ǲ��Ǿ����´����أ����ǣ�����©���ǳ���
//ָ��Ϊ��
//���ַ���
//��ͷ�пհ��ַ�
//��������
//�������ַ�
//���
//����ܶ࣬�ǵ�������Щ�����ʱ�򣬺���������ʲôֵ�����ã��������ʱ����Ҫһ��ȫ�ֵ�״̬���������ǷǷ����ǺϷ�ת�����Ϳ����õ�ö��
#include<assert.h>
#include<ctype.h>
#include<stdlib.h>
enum status 
{
	VALID,
	INVALID
}sta = INVALID;//���ȾͶ���һ��ȫ��״̬����Ϊ�Ƿ�ֵ����Ϊ�Ƿ�������Ƚ϶�
 

int my_atoi(const char* str) {
	assert(str);//���ȶ�ָ���п�
	int flag = 1;//����һ����ʶ��������
	if (*str == '\0') {
		return 0;//���ǷǷ���0�����������ַ�0ת����������
	}
	if (isspace(*str)) {
		str++;
	}
	if (*str == '+') {
		flag = 1;
		str++;//��������
	}
	if (*str == '-') {
		flag = -1;
		str++;//��������
	}

	long long n = 0;//Ϊʲô��longlong����Ϊ�������ˣ�������ŵ�int�����ֱ�ӽض��ˣ����ýضϵ�������ԶҲ���ᳬ����Χ
	while (*str != '\0') {
		if (isdigit(*str)) {//�������ַ���ת��
			n = n * 10 + flag * (*str - '0');//����flag�Ϳ���ֱ�����������Ϸ��Ž��м�����
			if (n < INT_MIN || n > INT_MAX) {
				return 0;//���Խ������
			}
		}
		else {
			return n;
		}
		str++;
	}

	if (*str == '\0') {
		sta = VALID;//�������strΪ\0�ˣ���˵��û�г������⣬�ͽ�״̬��Ϊ�Ϸ�
	}
	return (int)n;
}


int main() {
	//ģ��ʵ��atoi
	char arr[100] = "123a4";
	int ret = my_atoi(arr);
	if (sta == VALID) {
		printf("�Ϸ�ת��: %d", ret);
	}
	else {
		printf("�Ƿ�ת��: %d", ret);
	}
	return 0;
}