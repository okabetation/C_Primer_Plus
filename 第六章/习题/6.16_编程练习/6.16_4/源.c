#include <stdio.h>
//数组嵌套循环和一般循环
int main(void)
{
	char str[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U' };
	int i, j;
	int k = 0;

	for (i = 0; i < 6; i++)   //控制循环趟次 
	{
		printf("i=%d ", i);
		for (j = 0; j <= i; j++)   //控制每次输出个数 
		{
			printf("%c", str[k]);
			printf(" j=%d ", j);
			k++;
		}
	printf("\n");
	}
	getchar();
	return 0;
}

/*
A
BC
DEF
GHIJ
KLMNO
PQRSTU
*/

/*
int first, end;
	char y='A' ;
	for (end=0;end<6;end++)
	{
		for (first = 0; first <= end; first++) //first首次递增后为1；end也为1；所以判别式1<=1
												//应该只输入一次y的值B；但控制台输入了两个值
												//(已解决)first每次开始循环都会重新赋值为0
			{
				printf("%c", y);
				y++;
			}
		printf("\n");

	}
	getchar();
	return 0;
*/