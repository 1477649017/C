#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� ���ļ��������ݵ����
//	/*int ch = 0;
//	for (ch = 'a';ch <= 'z';ch++) {
//		fputc(ch, pf);
//	}*/
//	//���ļ� ���ļ������������ݵ�����
//	int ch1 = 0;
//	while ((ch1 = fgetc(pf)) != EOF) {
//		printf("%c ", ch1);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	int ch = 0;
//	ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}

//int main() {
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputs("abcdefg\n", pf);
//	fputs("zzzzzzz\n", pf);//д��ʱ������Ҫ�Լ��ӵ�
//    //�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	char arr[256] = "xxxxxxxxxxxxxxxxxxxxxxx";
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	while (fgets(arr, 4, pf) != NULL) {
//		printf("%s\n", arr);//�ļ��������汾���л��з��������������ʱ����Բ��ӻ��з�
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct stu {
//	char arr[20];
//	int age;
//};
//int main() {
//	struct stu s = { "����",23 };
//	//���ļ�
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//��ʽ��д�ļ�
//	fprintf(pf, "%s %d", s.arr, s.age);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct stu {
	char arr[20];
	int age;
};
int main() {
	struct stu s = {0};
	//���ļ�
	FILE* pf = fopen("test1.txt", "r");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	//��ʽ�����ļ�
	fscanf(pf, "%s %d", s.arr,&(s.age));
	//�Ѵ��ļ������ȡ�������ݸ�ֵ���ṹ���Ա
	//��ӡ����Ļ��
	fprintf(stdout, "%s %d", s.arr, s.age);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
