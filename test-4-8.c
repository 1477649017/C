#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu {
//	char name[20];
//	int age;
//};
//int main() {
//	char arr[20] = { 0 };
//	struct stu s1 = { "张三",18 };
//	//将一个格式化的数据输出转换到字符串里面去
//	sprintf(arr, "%s %d", s1.name, s1.age);
//	printf("%s\n", arr);
//
//	//将一个字符串里面的格式化数据取出来
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
//	struct stu s1 = { "张三",19 };
//	//打开文件
//	FILE* pf = fopen("test.txt", "rb");//写文件wb 读文件rb
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	////写文件
//	/*fwrite(&s1, sizeof(struct stu), 1, pf);*/
//	// 读文件
//	struct stu s2 = { 0 };
//	fread(&s2, sizeof(struct stu), 1, pf);
//	printf("%s %d", s2.name, s2.age);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//读文件 文件里面放的是 abcdef
//	int ch = fgetc(pf);//字符读取函数，每读一次，文件指针会自动往后偏移,最开始是指向a
//	printf("%c\n", ch);
//	//利用fseek来重新定位文件指针
//	fseek(pf, 2, SEEK_SET);//此时文件指针会指向c
//	int ch1 = fgetc(pf);
//	printf("%c\n", ch1);
//
//	fseek(pf, 1, SEEK_CUR);//此时文件指针指向e
//	int ch2 = fgetc(pf);
//	printf("%c\n", ch2);
//
//	fseek(pf, -1, SEEK_END);//此时文件指针指向f
//	int ch3 = fgetc(pf);
//	printf("%c\n", ch3);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//写文件 写入abcd
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//
//	fseek(pf, 2, SEEK_SET);//此时文件指针指向c
//	fputc('x', pf);//此时文件内容被改成了abxd
//
//	long pos = ftell(pf);
//	printf("%ld\n", pos);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	int a = 10000;
//	//打开文件
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//二进制将a写入文件
//	fwrite(&a, 4, 1, pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int c; // 注意：int，非char，要求处理EOF
//    FILE* fp = fopen("test.txt", "r");
//    if (fp == NULL) {
//        perror("fopen");
//        return 1;
//    }
//    //fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//    while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//    {
//        putchar(c);
//    }
//    //判断是什么原因结束的
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
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠20秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(20000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）,手动刷新，即使缓冲区未满，也会加载到文件中
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠20秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(20000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区，所以这里再次睡眠排除fclose的干扰
//	pf = NULL;
//	return 0;
//}

//
////旋转字符串
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
//	//这里主要是补充一个思想
//	//比如左旋两个字符，可以先将前两个字符逆序，再将后两个字符逆序，然后再将整个字符串逆序，就可以达到左旋两个字符的目的
//	//适用于左旋右旋
//	int k = 0;
//	scanf("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}

//杨氏矩阵
void find_k(int arr[3][3],int k,int row,int col) {
	int x = 0;
	int y = col - 1;//此时先定位最右上角的元素(x,y)
	int flag = 0;
	while (x < row && y >= 0) {//循环的寻找
		if (arr[x][y] < k) {
			x++;//因为每行最右边最大，所以比k小就说明不在这一行，可以跨过这行寻找
		}
		else if (arr[x][y] > k) {
			y--;//一列最上面的元素最小，比k都大，说明不在这一列
		}
		else {
			printf("找到了，下标为 %d %d\n", x, y);
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		printf("没找到\n");
	}
}
int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };//这里以3*3的数组为例
	int k = 0;
	scanf("%d", &k);
	find_k(arr,k,3,3);

	return 0;
}