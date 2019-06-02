#include <stdio.h>
int main(void)
{
	float a, b, x;
	printf("请输入两个小数:\n");
	while (scanf("%f %f", &a, &b)!=0)
	{
		x = (a - b) / (a*b);
		printf("(%.3g-%.3g)/(%.3g*%.3g)=%.3g\n", a,b,a,b,x);			//.g  .G表示有效数字最大位数
		printf("请输入两个小数（输入q退出）：");
	}
	getchar();
	getchar();
	return 0;
}
/*
#include <stdio.h>
int main(void)
{
	double n, m;
	double res;
	printf("Enter a pair of numbers: ");
	while (scanf("%lf %lf", &n, &m) == 2)
	{
		res = (n - m) / (n * m);
		printf("(%.3g - %.3g)/(%.3g*%.3g) = %.5g\n", n, m, n, m, res);
		printf("Enter next pair (non-numeric to quit): ");
	}
	getchar();
	getchar();
	return 0;
}
*/