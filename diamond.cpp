#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1,�����������
//int main() {
//	int level = 0;
//	scanf("%d", &level);
//	//����ϰ벿��
//	for (int i = 0;i < level;i++) {
//		for (int j = 0;j < level - 1 - i;j++) {
//			printf(" ");
//		}
//		for (int j = 0;j < 2 * i + 1;j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	//����°벿��
//	for (int i = 0;i < level - 1;i++) {
//		for (int j = 0;j < i + 1;j++) {
//			printf(" ");
//		}
//		for (int j = 0;j < 2*(level - 1) - (2*i + 1);j++){
//			printf("*");
//		
//		}
//		printf("\n");
//	}
//
//}
//#include<string.h>
//int main() {
// 	char arr1[] = { 'a','b','c','d' };
//	char arr2[] = "abcd";
//	char arr3[] = { 'a','b','c','d','\0' };
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",strlen(arr3));
//	
//
//
//	return 0;
//}
//#include<string.h>
//int main() {
//	//printf("\a\a");
//	//printf("abvd\n");
//	//printf("abc\rghgjhhj\n");
//	//printf("\130");//���x
//	//printf("%d\n", strlen("c:\test\628\test.c"));
//
//
//}
//void compurenum(int a, int b) {
//	if (a > b) {
//		printf("%d\n", a);
//	}
//	else {
//		printf("%d\n", b);
//	}
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	compurenum(a, b);
//	return 0;
//
//}
//#include<stdio.h>
//int main() {
//    printf("Name\tAge\tGender\n");
//    for (int i = 0;i < 21;i++) {
//        printf("-");
//    }
//    printf("\n");
//    printf("Jake\t18\tman");
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int IQ = 0;
//    while (scanf("%d", &IQ) != EOF) {
//        if (IQ >= 140) {
//            printf("Genius");
//        }
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main() {
//	/*int a = 10;
//	int b = 20;
//	int m = 0;
//	m = (a > b) ? a : b;
//	printf("%d\n", m);*/
//
//	unsigned int a = 100;
//	typedef unsigned int uint;
//	uint b = 200;//��ʱ��uint���൱��unsigned int
//
//}
//static���ξֲ�����
//void test() {
//	static int a = 5;
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	int i = 0;
//	while(i < 10){
//		test();
//		i++;
//	}
//	return 0;
//}