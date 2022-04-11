#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int my_atoi(const char* str) {
//	int n = 0;
//	while (*str) {
//		n = n * 10 + *str - '0';//*str是取出的是数字字符，减去字符0才能够得到对应的值 '3' - '0' = 51 - 48 = 3 ASCII码值是相对应的
//		str++;
//	}
//	return n;
//}
//如果是上面这种，是不是就万事大吉了呢，不是，并且漏洞非常多
//指针为空
//空字符串
//开头有空白字符
//带正负号
//非数字字符
//溢出
//问题很多，那当遇到这些问题的时候，好像函数返回什么值都不好，所以这个时候需要一个全局的状态量来衡量是非法还是合法转化，就可以用到枚举
#include<assert.h>
#include<ctype.h>
#include<stdlib.h>
enum status 
{
	VALID,
	INVALID
}sta = INVALID;//首先就定义一个全局状态变量为非法值，因为非法的情况比较多
 

int my_atoi(const char* str) {
	assert(str);//首先对指针判空
	int flag = 1;//定义一个标识正负的量
	if (*str == '\0') {
		return 0;//这是非法的0，与正常的字符0转化得以区别
	}
	if (isspace(*str)) {
		str++;
	}
	if (*str == '+') {
		flag = 1;
		str++;//跳过正号
	}
	if (*str == '-') {
		flag = -1;
		str++;//跳过负号
	}

	long long n = 0;//为什么用longlong，因为如果溢出了，但是你放到int里面就直接截断了，那用截断的数比永远也不会超出范围
	while (*str != '\0') {
		if (isdigit(*str)) {//是数字字符就转化
			n = n * 10 + flag * (*str - '0');//乘以flag就可以直接是让它带上符号进行计算了
			if (n < INT_MIN || n > INT_MAX) {
				return 0;//溢出越界的情况
			}
		}
		else {
			return n;
		}
		str++;
	}

	if (*str == '\0') {
		sta = VALID;//如果最终str为\0了，就说明没有出现问题，就将状态改为合法
	}
	return (int)n;
}


int main() {
	//模拟实现atoi
	char arr[100] = "123a4";
	int ret = my_atoi(arr);
	if (sta == VALID) {
		printf("合法转化: %d", ret);
	}
	else {
		printf("非法转化: %d", ret);
	}
	return 0;
}