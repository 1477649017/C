#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//	return 0;
//}

//int main() {
//	float n = 5.5;
//	//5.5 101.1 M=1.011 
//	//表示为 (-1)^0 * 1.011 * 2^2
//	//所以 S = 0,M只保存小数位 ，E=2+127 = 129
//	// 0 10000001 01100000000000000000000
//	// 0100 0000 1011 0000 0000 0000 0000 0000表示成十六进制 40 b0 00 00 小端存储 内存展示应该是 00 00 b0 40
//}

int main()
{
	int n = 9;//n的空间是整形的空间,4个字节
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);//这肯定是打印4没有任何问题
	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
	//因为pFloat是一个浮点型的指针，你用它去取一个以整形的方式存储的值肯定会有问题，不会是9.0的
	//9以补码的形式存储着 00000000 00000000 00000000 00001001
	//所以站在浮点型的角度 S = 0 E全0 E的真实值为-126 M = 0.00000000000000000001001 因为E全0，所以M前面不会补1
	//所以在浮点型的角度，这个数就是 (-1)^0 * 0.00000000000000000001001(二进制浮点数) * 2^-126
	//printf打印默认保留六位，但是你M前六位都还没1，后面还除了个2^126,这个数会很小很小，无限接近0
	*pFloat = 9.0;//这个时候将9.0存进去，也就是以浮点型的形式存储
	printf("num的值为：%d\n", n);//但是你以整形的方式去取一个浮点型的数，就不一样了
	//9.0 1001.0  (-1)^0 * 1.001 * 2^3      M = 1.001    E（转换值） = 3   + 127 = 130 
	//0 10000010 00100000000000000000000 %d形式取出，认为这是一个补码，最高位0正数 所以输出会是一个很大的数
	printf("*pFloat的值为：%f\n", *pFloat);//再以浮点型的形式取出没有任何问题 9.000000
	return 0;
}