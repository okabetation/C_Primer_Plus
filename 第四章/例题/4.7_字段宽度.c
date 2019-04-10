#include <stdio.h>
#define PAGES	959
int main(void)
{
	printf("*%d*\n", PAGES);		//输出结果与带整数字段宽度的转换说明的输出结果相同
	printf("*%2d*\n", PAGES);		//输出应该是2字符宽度，因为待打印的整数有3位数字，所以字段宽度自动扩大以符合整数的长度
	printf("*%10d*\n", PAGES);		//七个空格，三位数字，右对齐
	printf("*%-10d*\n", PAGES);		//"-"待打印的值左对齐
	getchar();
	return 0;
}