#include<stdio.h>

int main(void)
{
	char ch;
	char space = ' ';
	char a = 'A';
	char x;
	int i, j, n, k, l;

	printf("������һ����д��ĸ��\n");
	scanf("%c", &ch);

	n = ch - 64;   //A��ASCII��ֵΪ65 
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n - i; j++)   //�ո��� 
		{
			putchar(space);
		}

		a = 'A';   //����ѭ������Ϊ��ʹÿ�δ�A��ʼ 
		for (k = 0; k <= i; k++)   //���� 
		{
			printf("%c", a);
			a++;
		}

		x = ch + i - n;
		for (l = i; l > 0; l--)   //���� 
		{
			printf("%c", x);
			x--;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}