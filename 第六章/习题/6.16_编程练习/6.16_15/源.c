#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[255];
	int x,y;
	scanf("%s", ch);
	x = strlen(ch)-1;
	for (y = x; y >=0; y--)
		printf("%c", ch[y]);
	getchar();
	getchar();
	return 0;
}