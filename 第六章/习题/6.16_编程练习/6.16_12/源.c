#include <stdio.h>
float add1(int num);
float add2(int num);
int main(void)
{
	int a;
	printf("请输入指定次数：");
	while (scanf("%d", &a) == 1 && a > 0)
	{
		printf("序列的总和为：%f\n", add1(a) + add2(a));
		printf("请输入指定次数：");
	}
	getchar();
	return 0;
}
float add1(int num)
{
	float a,b=0.0;
	for (a = 1; a <= num; a++)
		b += 1.0f / a;
	return b;
}

float add2(int num)
{
	float a, b = 0.0,c=-1;
	for (a = 1; a <= num; a++)
	{
		c *= -1;
		b += (1.0f / a)*c;
	}
	return b;
}
