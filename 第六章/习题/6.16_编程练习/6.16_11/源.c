#include <stdio.h>
int main(void)
{
	int x[7];
	int a, b;
	printf("ΗλΚδΘλ8ΈφΥϋΚύ:");
	for (b = 0; b <= 7; b++)
		scanf("%d", &x[b]);
	for (a = 7; a >= 0; a--)
		printf("%d ", x[a]);
	getchar();
	getchar();
	return 0;
}