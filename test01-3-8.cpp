#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	for (int i = 1;i <= 100;i++) {
//		if (i % 2 != 0) {
//			printf("%d ",i);
//		}
//	
//	
//	}
//
//
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}
//int main() {
	//int i = 1;
	/*while (i <= 10) {
		if (5 == i) {
			continue;
		}
		printf("%d", i);
		i++;
	}*/
	/*for (i = 1;i <= 10;i++) {
		if (5 == i) {
			continue;
		}
		printf("%d", i);
	
	}*/

	/*int ch = 0;
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}*/

	//char password[20] = { 0 };
	//printf("����������-��");
	//scanf("%s", password);
	////1,�������1
	//getchar();
	//
	////2,���������
	//int tmp = 0;
	//while ((tmp = getchar()) != '\n') {
	//	;
	//
	//}
	//int ch = 0;
	//printf("�Ƿ�ȷ������Y/N");
	//ch = getchar();
	//if ('Y' == ch) {
	//	printf("ȷ������");
	//}
	//else {
	//	printf("ȷ�ϴ���");
	//}


//}
#include <stdio.h>
int main()
{
	int ch = '\0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}
	return 0;
}
