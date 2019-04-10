#include <stdio.h>

int main(void)
{
	const double RENT = 3852.99;	//const变量

	printf("*%f*\n", RENT);			//字段宽度和小数点后面的位数均为系统默认设置，即字段宽度是容纳
									//待打印数字所需的位数和小数点后打印6位数字
	printf("*%e*\n", RENT);			//默认情况下，在编译器在小数点的左侧打印1个数字，在小数点的右侧打印6个数字
	printf("*%4.2f*\n", RENT);		
	printf("*%3.1f*\n", RENT);		//四舍五入
	printf("*%10.3f*\n", RENT);
	printf("*%10.3E*\n", RENT);		//四舍五入
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);	//0标记使得打印的值前面以0填充以满足字段要求
	getchar();
	return 0;
}