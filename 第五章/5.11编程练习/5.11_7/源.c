#include <stdio.h>
void m3(double n);
int main(void)
{
	double i,j;
	printf("请输入一个数(输入q退出):\n");
	j=scanf("%lf", &i);
	while(j==1)
	{
		m3(i);
		printf("请输入一个数(输入q退出):\n");
		j = scanf("%lf", &i);
	}
	printf("bye\n");
	system("pause");
	return 0;
}
void m3(double n)
{
	printf("%lf\n",n*n*n);
}