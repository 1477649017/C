#define  _CRT_SECURE_NO_WARNINGS 1

//int main() {
//	int m = 0;
//	scanf("%d", &m);
//	//����10�Ķ�����λΪ 00000000000000000000000000001010
//	//��ӡż��λ
//	for (int i = 32;i > 0;i -= 2) {
//		printf("%d ", (m >> (i - 1))&1);
//	}
//	printf("\n");
//	//����λ
//	for (int j = 31;j > 0;j -= 2) {
//		printf("%d ", (m >> (j - 1))&1);
//	}
//	return 0;
//}

//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("����ǰ:a = %d b = %d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("������:a = %d b = %d\n", a, b);
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//#include<string.h>
//int main() {
//	char arr[100] = { 0 };
//	fgets(arr, 100, stdin);
//	int len = strlen(arr);
//
//	char* left = arr;
//	char* right = arr + len - 1;
//
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0;i < 10;i++) {
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main() {
    char arr[100] = { 0 };
    fgets(arr,100,stdin);
    int len = strlen(arr);
    char* left = arr;
    char* right = arr + len - 1;
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
    printf("%s\n", arr);



    return 0;
}