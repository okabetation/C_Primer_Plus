#include <stdio.h>
#define IN 2.54f
#define FT 30.48f
int main(void)
{
	float tall, in,ft;
	int a = 1;
	printf("Enter a height in centimeters: ");
	a=scanf("%f", &tall);
	while (tall > 0&&a==1)
	{
		in = tall / IN;
		ft = tall / FT;
		printf("%.1f cm = %.0f feet, %.1f inches\n", tall, ft, in);
		printf("Enter a height in centimeters£¨<=0 to quit):\n");
		a=scanf("%f", &tall);
	}
	printf("bye");
	getchar();
	getchar();
	getchar();
	return 0;
}