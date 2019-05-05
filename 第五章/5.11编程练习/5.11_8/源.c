#include <stdio.h>
int main(void)
{
	int a, b, c,i,j;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	i=scanf("%d", &a);
	printf("Now enter the first operand:");
	j=scanf("%d", &b);
	while (i==1&&j==1&&a>0&&b>0)
	{
		c = b % a;
		printf("%d %% %d is %d\n", b, a, c);
		printf("Enter next number for first operand(<=0 to quit):");
		j = scanf("%d", &b);
	}
	printf("done");
	getchar();
	getchar();
	return 0;
}