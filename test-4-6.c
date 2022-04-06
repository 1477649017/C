#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
struct s1 {
	int num;
	char c1;
	int arr[0];
	//在有些编译器下这种写法可能会报错，可以改为  int arr[]

};
int main() {
	struct s1* pc = (struct s1*)malloc(sizeof(struct s1) + 40);//假设这个柔性数组里面会放10个整形
	//printf("%d\n", sizeof(struct s1));
	for (int i = 0;i < 10;i++) {
		pc->arr[i] = i;//为这个柔性数组赋值
	}
	/*for (int i = 0;i < 10;i++) {
		printf("%d ", pc->arr[i]);
	}*/

	//柔性数组的柔性就体现在其大小是不确定的，是我们看情况去给它动态申请的，当不够的时候也可以扩容
	struct s1* ptr = realloc(pc, sizeof(sizeof(struct s1) + 80));
	if (ptr != NULL) {
		pc = ptr;
	}
	else {
		perror("realloc");
		return 1;
	}
	for (int i = 10;i < 20;i++) {
		pc->arr[i] = i;//为这个柔性数组赋值
	}
	/*for (int i = 10;i < 20;i++) {
		printf("%d ", pc->arr[i]);
	}*/
	printf("\n");

	//检验柔性数组是否有内存对齐
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", offsetof(struct s1, arr));
	return 0;
}