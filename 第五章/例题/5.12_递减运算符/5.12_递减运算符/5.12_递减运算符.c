#include <stdio.h>
#define MAX 100
int main(void)
{
	int count = MAX + 1;		//101

	while (--count > 0) {			//ÏÈµÝ¼õcountÔÙÊ¹ÓÃ --count=100
		printf("%d nottles of spring water on the wall,"
			" %d bottles of spring water!\n", count, count);	//100
		printf("Take one down and pass it aroundm\n");
		printf("%d bottles of spring water!\n\n", count - 1);	//100-1
	}
	getchar();
	return 0;
}