#include <stdio.h>
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	getchar();
	return 0;
}
int jolly(void)
{
	printf("For he's a jolly good fellow!\n");
	return 0;
}
int deny(void)
{
	printf("which nobody can deny!\n");
	return 0;
}

/* ²Î¿¼´ð°¸
#include <stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
 jolly();
 jolly();
 jolly();
 deny();
 return 0;
}
void jolly(void)
{
 printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
 printf("Which nobody can deny!\n");
}
*/