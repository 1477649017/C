#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu {
//	char name[20];
//	int age;
//};
//int main() {
//	char arr[20] = { 0 };
//	struct stu s1 = { "����",18 };
//	//��һ����ʽ�����������ת�����ַ�������ȥ
//	sprintf(arr, "%s %d", s1.name, s1.age);
//	printf("%s\n", arr);
//
//	//��һ���ַ�������ĸ�ʽ������ȡ����
//	struct stu tmp = { 0 };
//	sscanf(arr, "%s %d", tmp.name, &(tmp.age));
//	printf("%s %d", tmp.name, tmp.age);
//	return 0;
//}
//struct stu {
//	char name[20];
//	int age;
//};
//int main() {
//	struct stu s1 = { "����",19 };
//	//���ļ�
//	FILE* pf = fopen("test.txt", "rb");//д�ļ�wb ���ļ�rb
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	////д�ļ�
//	/*fwrite(&s1, sizeof(struct stu), 1, pf);*/
//	// ���ļ�
//	struct stu s2 = { 0 };
//	fread(&s2, sizeof(struct stu), 1, pf);
//	printf("%s %d", s2.name, s2.age);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� �ļ�����ŵ��� abcdef
//	int ch = fgetc(pf);//�ַ���ȡ������ÿ��һ�Σ��ļ�ָ����Զ�����ƫ��,�ʼ��ָ��a
//	printf("%c\n", ch);
//	//����fseek�����¶�λ�ļ�ָ��
//	fseek(pf, 2, SEEK_SET);//��ʱ�ļ�ָ���ָ��c
//	int ch1 = fgetc(pf);
//	printf("%c\n", ch1);
//
//	fseek(pf, 1, SEEK_CUR);//��ʱ�ļ�ָ��ָ��e
//	int ch2 = fgetc(pf);
//	printf("%c\n", ch2);
//
//	fseek(pf, -1, SEEK_END);//��ʱ�ļ�ָ��ָ��f
//	int ch3 = fgetc(pf);
//	printf("%c\n", ch3);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� д��abcd
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//
//	fseek(pf, 2, SEEK_SET);//��ʱ�ļ�ָ��ָ��c
//	fputc('x', pf);//��ʱ�ļ����ݱ��ĳ���abxd
//
//	long pos = ftell(pf);
//	printf("%ld\n", pos);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	int a = 10000;
//	//���ļ�
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//�����ƽ�aд���ļ�
//	fwrite(&a, 4, 1, pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int c; // ע�⣺int����char��Ҫ����EOF
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL) {
//        perror("fopen");
//        return 1;
//    }
//    //fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//    while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//    {
//        putchar(c);
//    }
//    //�ж���ʲôԭ�������
//    if (ferror(fp))
//        puts("I/O error when reading");
//    else if (feof(fp))
//        puts("End of file reached successfully");
//    fclose(fp);
//    fp = NULL;
//}

//#include<stdio.h>
//#include<windows.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��20��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(20000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�,�ֶ�ˢ�£���ʹ������δ����Ҳ����ص��ļ���
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��20��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(20000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»����������������ٴ�˯���ų�fclose�ĸ���
//	pf = NULL;
//	return 0;
//}

//
////��ת�ַ���
//#include<string.h>
//void reverse(char* left,char* right) {
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr,int k) {
//	int len = strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//
//}
//int main() {
//	char arr[20] = "abcdef";
//	//������Ҫ�ǲ���һ��˼��
//	//�������������ַ��������Ƚ�ǰ�����ַ������ٽ��������ַ�����Ȼ���ٽ������ַ������򣬾Ϳ��Դﵽ���������ַ���Ŀ��
//	//��������������
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

//���Ͼ���
void find_k(int arr[3][3],int k,int row,int col) {
	int x = 0;
	int y = col - 1;//��ʱ�ȶ�λ�����Ͻǵ�Ԫ��(x,y)
	int flag = 0;
	while (x < row && y >= 0) {//ѭ����Ѱ��
		if (arr[x][y] < k) {
			x++;//��Ϊÿ�����ұ�������Ա�kС��˵��������һ�У����Կ������Ѱ��
		}
		else if (arr[x][y] > k) {
			y--;//һ���������Ԫ����С����k����˵��������һ��
		}
		else {
			printf("�ҵ��ˣ��±�Ϊ %d %d\n", x, y);
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("û�ҵ�\n");
	}
}
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//������3*3������Ϊ��
	int k = 0;
	scanf("%d", &k);
	find_k(arr,k,3,3);

	return 0;
}