#include <stdio.h>
#include <string.h>
int main(void)
{
	int x;
	char y[20];

	printf("请输入一串字符:\n");
	for(x=0;scanf("%s",y);x++)				//循环条件有错，输入q无法退出循环(已解决)  
	{
		printf("%d\n",strlen(y));
		if(y[0]=='q') break;				//定义一个数组下标为0的元素字符q进行判断
		printf("请输入一串字符(输入q停止):\n");
	}
	printf("done!");
	return 0;
}
