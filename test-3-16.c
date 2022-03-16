#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	/*char arr[] = {0};
	scanf("%s", arr);
	int ch = getchar();
	printf("%d", ch);*/

	char ch1 = 0;
	char ch2 = 0;
	while (scanf("%c %c", &ch1, &ch2) != EOF) {
		printf("%d %d\n", ch1, ch2);
	}

}