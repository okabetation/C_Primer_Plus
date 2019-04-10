/*编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式，然后，
  如果系统支持，再打印成p记数法（即十六进制记数法）。按以下格式输出（实际显示的指数位数因系统而异）：
  Enter a floating-point value:64.25
  fixed-point notation:64.250000
  exponential notation:6.425000e+01
  p notation:0x1.01p+6
  */
#include <stdio.h>
int main()
{
	float a;
	printf("请输入一个浮点数：");
	scanf("%f", &a);
	printf("Enter a floating-point value:%.2f\n", a);
	printf("fixed-point notation:%.6f\n", a);
	printf("exponential notation:%.6e\n", a);
	printf("p notation:%.2a",a);
	getchar();
	getchar();
	return 0;
}