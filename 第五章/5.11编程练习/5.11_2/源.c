#include <stdio.h>
int main(void)
{
	int j,i;
	printf("请输入一个整数:(输入q退出)\n");
	i=scanf("%d", &j)==1;
	printf("%d ", i);
	for (int j = 0; j < 10; j++)
	{
		i++;
		printf("%d ", i);
	}
	printf("\nbye");
	getchar();
	getchar();
	getchar();
	return 0;
}