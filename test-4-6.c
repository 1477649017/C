#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
struct s1 {
	int num;
	char c1;
	int arr[0];
	//����Щ������������д�����ܻᱨ�����Ը�Ϊ  int arr[]

};
int main() {
	struct s1* pc = (struct s1*)malloc(sizeof(struct s1) + 40);//���������������������10������
	//printf("%d\n", sizeof(struct s1));
	for (int i = 0;i < 10;i++) {
		pc->arr[i] = i;//Ϊ����������鸳ֵ
	}
	/*for (int i = 0;i < 10;i++) {
		printf("%d ", pc->arr[i]);
	}*/

	//������������Ծ����������С�ǲ�ȷ���ģ������ǿ����ȥ������̬����ģ���������ʱ��Ҳ��������
	struct s1* ptr = realloc(pc, sizeof(sizeof(struct s1) + 80));
	if (ptr != NULL) {
		pc = ptr;
	}
	else {
		perror("realloc");
		return 1;
	}
	for (int i = 10;i < 20;i++) {
		pc->arr[i] = i;//Ϊ����������鸳ֵ
	}
	/*for (int i = 10;i < 20;i++) {
		printf("%d ", pc->arr[i]);
	}*/
	printf("\n");

	//�������������Ƿ����ڴ����
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", offsetof(struct s1, arr));
	return 0;
}