#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<string.h>
//int main() {
//	char arr[30] = { 0 };
//	system("shutdown -s -t 60");
//	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ���������룺��������ȡ���ػ���ע�⣬��ֻ���Ĵλ��ᣡ���ؿ���>>\n");
//	int count = 4;
//	while (count > 0) {
//		scanf("%s", arr);
//		if (strcmp(arr, "������") == 0) {
//			printf("������,��Ϊ��ȡ���ػ�!\n");
//			system("shutdown -a");
//			break;
//		}
//		else {
//			printf("�㻹�� %d �λ���\n", count - 1);
//			if ((count - 1) == 0) {
//				printf("�Բ�����û�а���ס���ᣬ���ȹػ���!\n");
//			}
//			else {
//				printf("����������>>\n");
//			}
//		}
//		count--;
//	}
//	
//	return 0;
//}

#include<stdio.h>
int main() {
    char ch1 = 0;
    char ch2 = 0;
    while ((scanf("%c\n%c", &ch1, &ch2)) != EOF) {
        int c1 = 0;
        c1 = getchar();
        ch1 = ch1 + 32;
        ch2 = ch2 + 32;
        putchar("%c\n", ch1);
        putchar("%c\n", ch2);


    }
    return 0;
}