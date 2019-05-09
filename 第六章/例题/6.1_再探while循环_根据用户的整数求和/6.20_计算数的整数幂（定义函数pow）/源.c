#include <stdio.h>
double power(double n, int p);
int main(void)
{
	double n, xpower;
	int p;
	printf("Enter a number and the positive integer power");//输入一个底数和指数，计算该正整数幂
	printf(" to which\nthe number will be raised. Enter q");//输入q退出
	printf(" to quit.\n");
	while (scanf("%lf %d", &n, &p) == 2)	//
	{
		xpower=power(n, p);
		printf("%lf\n", xpower);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyer this power trip -- bye！\n");
	getchar();
	return 0;
	
}
double power(double n, int p)
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;
	return pow;
}