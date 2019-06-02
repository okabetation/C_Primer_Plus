#include <stdio.h>
int main(void)
{
	int hang, x, y, i, j, k;
	char letter, space,a;
	space =' ';
	printf("请输入一个大写字母:");
	scanf("%c", &letter);
	x = letter - 64;
	for (hang = 0; hang < x; hang++)
	{
		for (y = 0; y<=x-hang; y++)	//空格数
		{
			putchar(space);
		}

		a = 'A';	//每次循环从A开始
			for (i = 0; i <= hang; i++)	//升序打印
			{
				printf("%C", a);
				a++;
			}
			k =letter+ hang - x;			//降序打印
			for (j = hang; j >0; j--)
			{
				printf("%c", k);
				k--;
			}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}
/*
#include <stdio.h>
int main(void)
{
	int x, y;
	char ch;
	printf("请输入一个大写字母：");
	scanf("%c", &ch);
	for (x = 0; x < ch - 'A'+1; x++)
	{
		for (y = 0; y < ch - 'A' + 1-x; y++)
		{
			printf(" ");
		}
		for (y = 65; y <= 'A' + x; y++)
		{
			printf("%c", y);
		}
		for (y = 'A' + x-1; y >='A'; y--)
			printf("%c", y);
		printf("\n");
	}
	getchar();
	getchar();
	return 0;
}

*/