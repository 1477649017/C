#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int ADD(int x, int y) {
//	return x + y;
//}
//
//int Sub(int x, int y) {
//	return x - y;
//}
//
//int Mul(int x, int y) {
//	return x * y;
//}
//
//int Div(int x, int y) {
//	return x / y;
//}

//int main() {
//	int (*pfarr[4])(int, int) = { ADD,Sub,Mul,Div };//pfarr��һ������ָ������
//	int (*(*p)[4])(int, int) = &pfarr;//p����һ��ָ����ָ�������ָ��
//	for (int i = 0;i < 4;i++) {
//		int ret = (*p)[i](3, 4);
//		printf("%d ", ret);
//	}
//}
//void menu() {
//	printf("==================\n");
//	printf("====1,�ӷ�����====\n");
//	printf("====2,��������====\n");
//	printf("====3,�˷�����====\n");
//	printf("====4,��������====\n");
//	printf("====0,�˳�����====\n");
//	printf("==================\n");
//}
//int cal(int (*p)(int,int)) {
//	int a = 0;
//	int b = 0;
//	printf("����������������>>>");
//	scanf("%d %d", &a, &b);
//	printf("������Ϊ %d\n", p(a, b));
//}
//int main() {
//	int ret = 0;
//	do {
//		menu();
//		printf("����������Ҫ���еļ������>>>");
//		scanf("%d", &ret);
//		switch (ret) {
//		case 0:
//			printf("�˳�������!\n");
//			break;
//		case 1:
//			cal(ADD);
//			break;
//		case 2:
//			cal(Sub);
//			break;
//		case 3:
//			cal(Mul);
//			break;
//		case 4:
//			cal(Div);
//			break;
//		default:
//			printf("�������!\n");
//			break;
//		}
//	} while (ret);
//	return 0;
//}

//ð������
//void Bubblesort(int arr[10],int sz) {
//	for (int i = 0;i < sz - 1;i++) {
//		for (int j = 0;j < sz - 1 - i;j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", arr[i]);
//	}
//
//}
//int main() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr,sz);
//	return 0;
//}

//���α�����Ϊ�Ƚ϶���
//int compareint(const void* el1, const void* el2) {
//	return (*(int*)el1) - (*(int*)el2);
//}
//int main() {
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]), compareint);
//    for (int i = 0;i < 10;i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//�ṹ�������Ϊ�Ƚ϶���
struct stu {
	char name[20];
	int age;
	double score;
};
int comparestruct(const void* el1, const void* el2) {
	return ((struct stu*)el1)->age - ((struct stu*)el2)->age;//��������Ϊ�Ƚ϶���
	//return strcmp(((struct stu*)el1)->name, ((struct stu*)el2)->name);//��������Ϊ�Ƚ϶���
}
//int main() {
//	struct stu arr1[3] = { {"zhangsan",17,77.8} ,{"lisi",66,56.7} ,{"wangwu",23,99.1} };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), comparestruct);
//	return 0;
//}

//����ð�������ԭ��ģ��ʵ��һ��ͨ�õ�ð��������
void swap(char* buf1,char* buf2,int width) {
	for (int i = 0;i < width;i++) {
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
int compareint(const void* el1, const void* el2) {
	return (*(int*)el1) - (*(int*)el2);
}
//����������
void Bubblesort(void* Base, int num, int width, int (*cmp)(const void* el1, const void* el2)) {
	for (int i = 0;i < num - 1;i++) {
		for (int j = 0;j < num - 1 - i;j++) {
			//if (arr[j] > arr[j + 1]) {�����������ݲ�һ�������εģ����������ǲ���ֱ���ô��ں�С�ںűȽϵ�
			if (cmp((char*)Base + j * width, (char*)Base + (j + 1) * width) > 0) {
				swap((char*)Base + j * width, (char*)Base + (j + 1) * width, width);
			}
		}
	}
}
int main() {
	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    Bubblesort(arr,sz,sizeof(arr[0]),compareint);
	for (int i = 0;i < 10;i++) {
		printf("%d ", arr[i]);
	}
	return 0;*/
	struct stu arr1[3] = { {"zhangsan",17,77.8} ,{"lisi",66,56.7} ,{"wangwu",23,99.1} };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Bubblesort(arr1, sz, sizeof(arr1[0]), comparestruct);
	return 0;

}