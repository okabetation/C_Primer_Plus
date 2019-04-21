//如果编译器不识别%zd,尝试换成%u或%lu
#include <stdio.h>
#include <string.h>			//string包含了strlen（）函数和其他一些字符串相关的函数
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("what's your name ?\n");
	scanf("%s",name);
	printf("Hello,%s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",
		strlen(name),sizeof name);
	printf("The phrase of praise has %zd letters",strlen(PRAISE));
	printf("and pccupise %zd memory cells.\n", sizeof PRAISE);
	system("pause");
	return 0;

	/*
	对于PRAISE,用strlen（）得出的也是字符串中的字符数（包括空格和标点符号）
	然而，sizeof运算符给出的数更大，因为它把字符串末尾不可见的空字符也计算在内
	改程序并未明确告诉计算机要给字符串预留多少空间，所以它必须计算双引号内的字符数

	运算对象是类型时，圆括号必不可少，但对于特定量，可有可无
	*/

}