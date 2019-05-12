#include <stdio.h>
int main(void)
{
	int i = 0;
	while (++i < 4)
		printf("Hi! ");
	printf("i=%d\n", i);
	do
		printf("bye ");
	while (i++ < 8);
	printf("i=%d\n", i);  //为什么i递增为8时，还要执行循环语句，为什么不是直接终止循环
	getchar();
	return 0;
}
/*
Hi! Hi! Hi! i=4
bye bye bye bye bye i=9
*/