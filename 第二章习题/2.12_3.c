#include <stdio.h>
int main(void)
{
	int day = 365;
	int age;
	printf("请输入你的年龄：\n");
	scanf_s("%d",&age);
	printf("你来到这个世界已经%d天",day*age);
	getchar();
	getchar();
	return 0;

}