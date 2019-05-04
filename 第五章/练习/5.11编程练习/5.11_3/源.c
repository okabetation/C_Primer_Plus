#include <stdio.h>
#define week 7
int main(void)
{
	int week1, day,day1;
	printf("请输入天数,输入0停止：\n");
	scanf("%d", &day);
	while (day > 0)
	{
		week1 = day / week;
		day1 = day % week;
		printf("%d days %d weeks,%d days\n", day, week1, day1);
		printf("请输入天数,输入0停止：\n");
		scanf("%d", &day);
	}
	printf("bye");
	getchar();
	getchar();
	return 0;
}