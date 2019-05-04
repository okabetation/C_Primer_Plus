#include <stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;

	fl = i = ch = 'C';
	printf("ch= %c, i =%d, fl= %2.2f\n", ch, i, fl);
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0*ch + i;
	printf("ch= %c, i= %d,fl= %2.2f\n", ch, i, fl);
	ch = 1107;			//类型降级 原始值求模256；1107%256=83 83在ASCLL码的值为S
	printf("Now ch = %c\n", ch);
	ch = 80.89;			//小数发生截断 值为80；80在	ASCLL码的值为P
	printf("Now ch = %c\n", ch);
	getchar();			
	return 0;

}