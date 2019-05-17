#include <stdio.h>
int main(void)
{
	char x,space=' ';
	int A, B, C, D;

	printf("请输入一个大写字母：\n");
	scanf("%c", &x);
	A = x - 'A';
	B = x + y - A;
	for (int y = 0; y <= A; y++)
	{
		for (int j = y,B=x+y-A; j >0; j--)	//降序
		{
			for (int n = 0,a = 'A'; n <= y; n++)	//升序
			{
				for (int i = 0; i <= A; i++)	//	输出空格
				{
					putchar(space);
				}
				printf("%c", a);
				a++;
			}
			printf("%c", B);
			B--;
		}
		printf("\n");
	}
	getchar();
	getchar();
	return 0;

}
/*char x;
printf("请输入一个大写字母：\n");
scanf("%c", &x);
for (char y = 'A'; y <= 'A' + (x - 'A'); y++)
{
	for (char i = 'A'; i <= 'A' + (x - 'A'); i++)
	{
		for (char n = 'A'; n <= 'A' + (x - 'A'); n++)
		{
			for (char j = x; x + (x - 'A') >= 'A'; j--)
			{
				printf("%c", j);

			}
			printf("%c", n);
		}
		printf("%c", i);
	}
	printf("\n");
}
getchar();
getchar();
return 0;
*/