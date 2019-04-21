#include <stdio.h>
int main(void)
{
	int x = 5;
	while (x-- > 0)			//先使用后递减，输出#####
	{
		printf("#");
	}
	printf("\n");
	/*while (--x > 0)		//先递减后使用，输出####
	{
		printf("#");
	}*/
	system("pause");
	return 0;
}