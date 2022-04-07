#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件 向文件进行数据的输出
//	/*int ch = 0;
//	for (ch = 'a';ch <= 'z';ch++) {
//		fputc(ch, pf);
//	}*/
//	//读文件 从文件里面输入数据到程序
//	int ch1 = 0;
//	while ((ch1 = fgetc(pf)) != EOF) {
//		printf("%c ", ch1);
//	}
//	//关闭文件
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
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputs("abcdefg\n", pf);
//	fputs("zzzzzzz\n", pf);//写的时候换行是要自己加的
//    //关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	char arr[256] = "xxxxxxxxxxxxxxxxxxxxxxx";
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	while (fgets(arr, 4, pf) != NULL) {
//		printf("%s\n", arr);//文件数据里面本身有换行符，所以在输出的时候可以不加换行符
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct stu {
//	char arr[20];
//	int age;
//};
//int main() {
//	struct stu s = { "张三",23 };
//	//打开文件
//	FILE* pf = fopen("test1.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//格式化写文件
//	fprintf(pf, "%s %d", s.arr, s.age);
//	//关闭文件
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
	//打开文件
	FILE* pf = fopen("test1.txt", "r");
	if (pf == NULL) {
		perror("fopen");
		return 1;
	}
	//格式化读文件
	fscanf(pf, "%s %d", s.arr,&(s.age));
	//把从文件里面读取到的数据赋值给结构体成员
	//打印到屏幕上
	fprintf(stdout, "%s %d", s.arr, s.age);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
