#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define MAX 100
//int main() {
////�����ʶ��
//	int max = MAX;
//	return 0;
//}
//#define reg register
//int main() {
//	int reg num = 100;//����һ���Ĵ�������
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
//	printf("%d\n", CAT(math, score));// CAT(math, score) ƴ�Ӻ����mathscore
//	return 0;
//}

//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main() {
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);//���6 10 9
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
//	//�����ڷ�֧�ṹ���������ǲ����������Ͳ�����룬�����ǲ�ִ��
//#if num == 1  //numֻ���Ǻ궨���������Ч
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
//	printf("hehe\n");//ֻ���ж��Ƿ񱻶����ˣ�������ֵ�޹�
//#endif
//#if !defined(MAX)
//	printf("luelue");
//#endif
////�����ж��Ƿ��壬�������ֶ�Ӧд����
//#ifdef MAX
//	printf("haha\n");
//#endif
//#ifndef MAX
//	printf("haha\n");
//#endif
//	return 0;
//}

//дһ���꣬����������λ�е�����ż��λ
//#define SWAP(num) ((((num)&0x55555555)<<1) | (((num)&0xaaaaaaaa)>>1))
//int main() {
//	int num = 0;
//	scanf("%d", &num);
//	int ret = SWAP(num);
//	printf("%d\n", ret);
//	return 0; 
//}

//дһ���꣬ģ��ʵ��offsetof
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