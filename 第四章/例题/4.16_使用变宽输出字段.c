#include <stdio.h>
int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	//变量width提供字符宽度，number是待打印的字符
	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The number is ;%*d:\n", width, +number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d", &width , &precision );
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("Done!\n");
	system("pause");
	return 0;

}