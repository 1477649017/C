#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<string.h>
//int main() {
//	char arr[30] = { 0 };
//	system("shutdown -s -t 60");
//	printf("请注意，你的电脑将在1分钟后关机，如果输入：我是猪，则取消关机。注意，你只有四次机会！慎重考虑>>\n");
//	int count = 4;
//	while (count > 0) {
//		scanf("%s", arr);
//		if (strcmp(arr, "我是猪") == 0) {
//			printf("真听话,已为你取消关机!\n");
//			system("shutdown -a");
//			break;
//		}
//		else {
//			printf("你还有 %d 次机会\n", count - 1);
//			if ((count - 1) == 0) {
//				printf("对不起，你没有把握住机会，静等关机吧!\n");
//			}
//			else {
//				printf("请重新输入>>\n");
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