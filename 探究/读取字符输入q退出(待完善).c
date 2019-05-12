#include <stdio.h>
#include <string.h>
int main(void)
{
	int x;
	char y[20];
	char a='q';
	printf("请输入一串字符:\n");
	for(x=0;scanf("%s",&y);x++)				//循环条件有错，输入q无法退出循环
	{
		printf("%d\n",strlen(y));
		if(y==a) break;
		printf("请输入一串字符(输入q停止):\n");
	}
	printf("done!");
	return 0;
}
