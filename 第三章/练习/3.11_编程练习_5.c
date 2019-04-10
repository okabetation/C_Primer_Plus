/*一年大约有3.156X10e7秒，编写一个程序，根据用户输年龄，然后显示该年龄对应的秒数*/
#include <stdio.h>
int main(void)
{
	float year = 3.15*10e7;
	int age;
	printf("请输入您的年龄：");
	scanf("%d",&age);
	printf("您已经来到这个世界%f秒", age*year);
	getchar();
	getchar();
	return 0;
}