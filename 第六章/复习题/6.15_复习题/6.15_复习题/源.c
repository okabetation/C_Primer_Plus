#include <stdio.h>
int main(void)
{
	int i, j, list[10];

	for (i = 0; i <= 9; i++)
	{
		list[i] = 2 * i + 3;
		for (j = 1; j <= i; j++)
			printf(" %d", list[j]);
		printf("\n");
	}
	getchar();
	return 0;
}
/*
				//这里为什么会输出一个换行符
 5
 5 7
 5 7 9
 5 7 9 11
 5 7 9 11 13
 5 7 9 11 13 15
 5 7 9 11 13 15 17
 5 7 9 11 13 15 17 19
 5 7 9 11 13 15 17 19 21



*/