#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//����ˮ����
//	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
//	int total = 0;//�ȵ���ƿ��
//	int empty = 0;//��ƿ��
//	int money = 0;//Ǯ
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2) {
//		total += (empty / 2);
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//void swap(int* arr,int sz) {
//	int* left = arr;
//	int* right = arr + sz - 1;
//	while (left < right) {
//		if ((*left) % 2 == 0 && (*right) % 2 != 0) {
//			int tmp = 0;
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//		left++;
//		right--;
//	}
//
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap(arr, sz);
//	for (int i = 0;i < sz;i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main() {
//	for (int i = 0; i < 1000;i++) {
//		printf("%d\n", i);
//	}
//	printf("hehe\n");
//	return 0;
//}
//void test1() {
//	printf("hehe\n");
//}
//void test() {
//	test1();
//}
//int main() {
//	test();
//
//	return 0;
//}
//
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0;i <= 12;i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//int my_strlen(char* str) {
//	if (*str != '\0') {
//		return 1 + my_strlen(str + 1);
//	}
//	else {
//		return 0;
//	}
//}
//int main() {
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//
//#include<assert.h>
//char* my_strcpy(char* dest,const char* src) {
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main() {
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdef";
//	printf("%s\n", my_strcpy(arr1, arr2));
//}
