#include <stdio.h>
int main(void)
{
	for (char x = 'F'; x > 'F' - 6; x--)
	{
		for (char y = 'F'; y >= x; y--)
			printf("%c", y);
		printf("\n");
	}
	getchar();
	return 0;
}
