#include <stdio.h>
void br(void);
void ic(void);
int main(void)
{
	br();
	printf(",");
	ic();
	ic();
	br();
	getchar();

}
void br(void)
{
	printf("Brazil,russia");
}
void ic(void)
{
	printf("Inda,China,\n");
}