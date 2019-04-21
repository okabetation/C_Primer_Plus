#include <stdio.h>
int main(void)
{
	char ch;

	printf("请输入一个字符\n");
	scanf_s("%c", &ch);
	printf("这个代码为%C,代码编号为%d", ch, ch);
	getchar();
	getchar();
	return 0;
}