#include <stdio.h>
int main(void)
{
	int count, sum,i,j;
	count = 0;
	sum = 0;
	printf("请输入天数(输入q退出):\n");
	j=scanf("%d", &i);
	while (j == 1)
	{
		while (count++ < i)
		{
			sum = sum + count;
		}
		printf("%d天里赚了%d￥\n", i, sum);
		printf("请输入天数(输入q退出):\n");
		fflush(stdin);
		j = scanf("%d", &i);
		count = 0;
		sum = 0;
	}
	printf("bye");
	getchar();
	getchar();
	return 0;
}