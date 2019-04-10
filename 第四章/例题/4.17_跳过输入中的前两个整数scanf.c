#include <stdio.h>
#define A 123
int main(void)
{
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);
	printf("The last integer was %d\n", n);
	system("pause");
	return 0;
}