#include <stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat,aboat );
	//下一行要求编译器支持c99或其中的相关特性
	printf("And it's %.1a in hexadecima,powers of 2 notation\n",aboat);		//%.1a的意思是只打印一位数字
	printf("%f can be written %e\n",abet,abet);
	printf("%Lf can be written %Le\n", dip, dip);
	getchar();
	return 0;
}