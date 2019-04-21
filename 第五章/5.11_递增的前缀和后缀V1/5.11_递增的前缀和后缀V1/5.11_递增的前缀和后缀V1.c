#include <stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;		//先使用a后递增
	pre_b = ++b;		//先递增b后使用
	printf("a     a_post     b     pre_b \n");
	printf("%ld %5d %10d %5d\n", a, a_post, b, pre_b);
	getchar();
	return 0;
}