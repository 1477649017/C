#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void replaceSpace(char* str, int length) {
    int spacecnt = 0;
    char* p = str;
    while (*p != '\0') {
        if (*p == ' ') {
            spacecnt++;
        }
        p++;
    }
    char* end1 = str + length - 1;
    char* end2 = str + length - 1 + 2 * spacecnt;
    char* tmp = end1;
    while (end1 != end2) {
        if (*end1 != ' ') {
            end2--;
            end1--;
        }
        else {
            memmove(end2 + 1, end1 + 1, tmp - end1);
            *(end2--) = '0';
            *(end2--) = '2';
            *(end2--) = '%';
            end1--;
            tmp = end1;
        }

    }
}

int main() {
	char arr[100] = "We arerere a happyabcdef";
	int length = strlen(arr);
	replaceSpace(arr, length);
    printf("%s\n", arr);
	return 0;
}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int len = 7;
//	int* p1 = arr;
//	int* p2 = arr + len - 1;
//	printf("%d\n", p2 - p1);//指针减指针，算的是间隔元素个数，算其中一边
//	return 0;
//}

//int main() {
//	char ch = 7;
//	printf("%c\n", ch);
//}