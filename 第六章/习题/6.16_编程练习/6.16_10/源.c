#include <stdio.h>
int main(void)
{
	int x, y, i=0,num;
	printf("Enter lower and upper integer limits:");
	for (scanf("%d %d", &x, &y);x!=y && x<y;)
	{
		for (num = x; num <= y; num++)
		{
			i = num * num + i;
		}
			printf("The sums of the squares form %d to %d is %d\n", x*x, y*y, i);
			printf("The sums of the of limits:");
			scanf("%d %d", &x, &y);
			i = 0;
	}
	printf("Done");
	getchar();
	getchar();
	return 0;
}