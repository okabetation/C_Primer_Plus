#include <stdio.h>
#include <math.h>
int main(void)
{
	int x[7],y;
	for (y = 0; y <= 7; y++)
	{
		x[y] = pow(2, y);
	}
	y = 0;
		do
		{
			printf("%d\n", x[y]);
		} while (y++ < 7);
	
	getchar();
	return 0;
}


/*
#include <stdio.h>
#include <math.h>									
int main(void)
{
	int x[7],y,i=0;
	for (y = 0; y <=7; y++)
	{
		x[y] = pow(2, y);
		do
		{
			printf("%d\n", x[y]);
		} while (i++ < 7);
	}
	getchar();
	return 0;
}
输出结果为	为什么输出了8个1
1
1
1 
1
1
1
1
1
2
4
8
16
32
64
128
*/