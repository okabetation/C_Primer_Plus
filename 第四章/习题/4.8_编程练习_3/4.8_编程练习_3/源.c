#include <stdio.h>
int main(void)
{
	float a;
	printf("强输入一个小数：");
	scanf("%f", &a);
	printf("The input is %.2f or %.1e.\n", a, a);
	printf("The input is %+.3f or %.3e.\n", a, a);
	getchar();
	getchar();	
	return 0;

}