/*编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char first[20];
	char last[20];
	printf("请输入您的名和姓：（使用空格间隔）\n");
	scanf("%s %s", &first, &last);
	printf("欢迎您%s %s\n", first, last);
	getchar();
	getchar();
	return 0;

}