#include <stdio.h>
#include <string.h>
int main(void)
{
	char z[20];
	int i,j;
	printf("请输入一个单词：");
	scanf("%s", z);
	i = strlen(z);
	for (j = i; j>=0; j--)
	{
		printf("%c", z[j]);
	}
	getchar();
	getchar();
	return 0;
}