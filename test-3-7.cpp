#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//extern int add(int x, int y);
//int main() {
//    /*int num = 0;
//    scanf("%d", &num);
//    for (int i = 0;i < 4;i++) {
//        int ret = num % 10;
//        num /= 10;
//        printf("%d", ret);
//    }*/
//    int num1 = 10;
//    int num2 = 20;
//    int ret = add(num1,num2);
//    printf("%d\n", ret);
//    return 0;
//}
//1,用函数实现比较大小
//int getmax(int x, int y) {
//	return (x > y ? x : y);
//
//}
//2,用宏实现比较大小
//#define MAX(x,y) ((x) > (y) ? (x) : (y))
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret = MAX(a,b);
//	printf("%d\n", ret);
//	return 0;
//}

//int main() {
//	int a = 9;
//	printf("%p\n", &a);
//	return 0;
//}
struct stu
{
	char name[5];
	int age;
	char sex[5];
	char id[20];

};
void print(struct stu* p) {
	printf("%s %d %s %s", p->name, p->age, p->sex, p->id);

}
int main() {
	struct stu s1 = { "张三",18,"男","2001070065" };
	struct stu s2 = { "如花",19,"女","2001060065" };
	scanf("%s %d %s %s", s1.name, &(s1.age), s1.sex, s1.id);
	printf("%s %d %s %s", s1.name, s1.age, s1.sex, s1.id);
	//使用函数结构体指针输出
	print(&s2);

}