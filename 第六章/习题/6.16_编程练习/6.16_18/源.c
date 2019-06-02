#include <stdio.h>

int main(void)
{
	int i = 1;
	int j = 5;
	while(j<150)
	{
		j = (j - i)*2;
		printf("Rabnud博士第%d周有%d个朋友\n", i, j);
		i++;
	}
	getchar();
	return 0;
}
