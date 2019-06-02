#include <stdio.h>
int main(void)
{
	double x[8], y[8];
	int a, b;
	printf("请输入八个数：");
	for (a = 0; a < 8; a++)
	{
		scanf("%lf", &x[a]);
		for (b = 0, y[a] = 0; b <= a; b++)	//y[a]每次循环都会重新赋值为0
		{
			y[a] += x[b];				//假设a为1，读入的数为1,2； y[a]重新赋值为0 y[1]+=x[0]=0+1=1
		}								//0<=1,b++,b=1, y[1]+=x[1]=1+2=3 循环结束
	}
		for (a = 0; a < 8; a++)
			printf("%3lf ", x[a]);

		printf("\n");

		for (a = 0; a < 8; a++)
			printf("%3lf ", y[a]);
	
	getchar();
	getchar();
	return 0;
}