#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	/*scanf在遇到第一个空格或者制表符或者换行符时就不再读取输入
	根据%S的说明只会读取字符串的第一个单词，而不是整句*/
	printf("What's your name?\n ");
	scanf("%s",name);				//%s表示打印一个字符串
	printf("Hello, %s. %s\n", name, PRAISE);
	system("pause");
	return 0;
} 