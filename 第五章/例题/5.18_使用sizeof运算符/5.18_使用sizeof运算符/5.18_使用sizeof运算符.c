//使用c99新增的%zd转换符 --如果编译器不支持%zd，请将其改成%u或%ld
#include <stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf("n= %d, n has %zd bytes; all ints have %zd bytes.\n",
		n,sizeof n, intsize);
	getchar();
	return 0;
}
