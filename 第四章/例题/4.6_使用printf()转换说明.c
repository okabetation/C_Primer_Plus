#include <stdio.h>
#define PI 3.141593
int main(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", number,pies);
	printf("Farewell! thou art dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);
	getchar();
	return 0;

}