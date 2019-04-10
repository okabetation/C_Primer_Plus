#include <stdio.h>
#include <string.h>
#define	BLURB "Authentic imitation!"
int main(void)
{
	char name[40];
	float cash;
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	//学以致用
	printf("Please enter your name:");
	scanf("%s", &name);
	printf("Please enter your deposit:");
	scanf("%f", &cash);
	printf("The %s family just may be $%.2f dollars richer!\n", name, cash);
	getchar();
	getchar();
	return 0;
}