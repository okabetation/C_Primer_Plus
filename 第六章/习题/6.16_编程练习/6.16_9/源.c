#include <stdio.h>
float d(float a,float b);
int main(void)
{
	float a, b;
	printf("请输入两个小数:\n");
	while (scanf("%f %f", &a, &b) != 0)
	{
		d(a, b);
	}
	getchar();
	getchar();
	return 0;
}
float d(float a,float b)
{
	float x;
	x = (a- b) / (a*b);
	printf("(%.3g-%.3g)/(%.3g*%.3g)=%.3g\n", a, b, a, b, x);
	printf("请输入两个小数（输入q退出）：");
	return x;
}