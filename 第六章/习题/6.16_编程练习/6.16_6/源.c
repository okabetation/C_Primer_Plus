#include <stdio.h>
int main(void)
{
	int mix, max, i, j, k;
	printf("请输入结束的值：");
	scanf("%d", &max);
	printf("请输入开始的值：");
	scanf("%d", &mix);
	printf("%5s %11s %14s\n","值","平方","立方");
	for (i=mix;i<=max;i++)	//判断从最小值递增到最大值
	{
		printf("%5d", i);
		for (j =i; j <= i; j++)		//输出平方
		{
			printf("%11d",j*j);
		}

		for (k =i; k <= i; k++)			//输出立方
		{
			printf("%14d",k*k*k);
		}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
/*
#include <stdio.h>
int main( void )
{
	int lower, upper, index;
	int square, cube;
	printf("Enter starting integer: ");
	scanf("%d", &lower);
	printf("Enter ending integer: ");
	scanf("%d", &upper);
	printf("%5s %10s %15s\n", "num", "square", "cube");
	for (index = lower; index <= upper; index++)
	{
		square = index * index;
		cube = index * square;
		printf("%5d %10d %15d\n", index, square, cube);
	}
	getchar();
	getchar();
	getchar();
	return 0;
}
*/