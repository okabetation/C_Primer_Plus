#include <stdio.h>
int main(void)
{
	for (int x = 0; x <5; x++)
	{
		for (int y=1;y<=x+1;y++)			
			printf("$");
		printf("\n");
	}
			getchar();
			return 0;
}