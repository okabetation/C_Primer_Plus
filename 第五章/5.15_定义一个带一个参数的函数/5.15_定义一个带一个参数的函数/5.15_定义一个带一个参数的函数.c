#include <stdio.h>
void pound(int n);	//ANSI函数原型声明	圆括号中包含一个int类型变量n的声明 n为形参，
					//函数原型告诉编译器pound（）需要一个int类型的参数
int main(void)
{
	int times = 5;
	char ch = '!';	//ASCLL码是33
	float f = 6.0f;

	pound(times);	//int类型的参数			time为实参
	pound(ch);		//和pound((int)ch);相同
	pound(f);		//和pound((int)f);相同

	getchar();
	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}