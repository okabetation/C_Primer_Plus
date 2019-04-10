#include <stdio.h>
void sm(void);
int main(void)
{
	sm();
	sm();
	sm();
	printf("\n");
	sm();
	sm();
	printf("\n");
	sm();
	getchar();
	return 0;
}
void sm(void)
{
	printf("Smile!");
}