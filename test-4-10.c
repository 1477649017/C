#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define MAX 100
//int main() {
////定义标识符
//	int max = MAX;
//	return 0;
//}
//#define reg register
//int main() {
//	int reg num = 100;//定义一个寄存器变量
//	return 0;
//}

//#define SUM(a,b) a+b
//int main() {
//	int ret = 3 * SUM(2, 2);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {
//	printf("hello bit\n");
//	printf("hello ""bit\n");
//	return 0;
//}

//#define PRINT(n,format) printf("the value of "#n" is "format"\n",n)
//int main() {
//	int a = 10;
//	double pai = 3.14;
//	PRINT(a,"%d");
//	PRINT(pai,"%lf");
//	return 0;
//}

//#define CAT(subject,score) subject##score
//int main() {
//	int mathscore = 100;
//	printf("%d\n", CAT(math, score));// CAT(math, score) 拼接后就是mathscore
//	return 0;
//}

//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main() {
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);//输出6 10 9
//	return 0;
//}

//int main() {
//#if 1
//	printf("hehe\n");
//#endif
//	return 0;
//}
//
//#define num 1
//int main() {
//	
//	//类似于分支结构，但是这是不满足条件就不会编译，而不是不执行
//#if num == 1  //num只能是宏定义出来才有效
//	printf("hehe\n");
//#elif num == 2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}
//
//#define MAX 0
//int main() {
//#if defined(MAX)
//	printf("hehe\n");//只是判断是否被定义了，与具体的值无关
//#endif
//#if !defined(MAX)
//	printf("luelue");
//#endif
////对于判断是否定义，是有两种对应写法的
//#ifdef MAX
//	printf("haha\n");
//#endif
//#ifndef MAX
//	printf("haha\n");
//#endif
//	return 0;
//}

//写一个宏，交换二进制位中的奇数偶数位
//#define SWAP(num) ((((num)&0x55555555)<<1) | (((num)&0xaaaaaaaa)>>1))
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = SWAP(num);
//	printf("%d\n", ret);
//	return 0; 
//}

//写一个宏，模拟实现offsetof
//struct stu{
//	int a;
//	char c1;
//	
//}s1;
//#define offsetof(structtype, membername) (size_t)&(((structtype *)0)->membername)
//int main() {
//	size_t ret = offsetof(struct stu, c1);
//	printf("%u\n", ret);
//}
//
//#define offsetof(pc,memberaddress) ((char*)memberaddress - (char*)pc)
//int main() {
//	struct stu* pc = &s1;
//	int ret = offsetof(pc, &(pc->a));
//	int ret1 = offsetof(pc, &(pc->c1));
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}