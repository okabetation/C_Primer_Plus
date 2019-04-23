#include <stdio.h>
#include <string.h>
int main(void)
{
	char first[20],last[20];
	int weight, weight1;
	printf("请输入您的名:\n");
	scanf("%s", &first);
	printf("请输入您的姓:\n");
	scanf("%s", &last);
	printf("%s %s\n", first, last);

	weight = strlen(first);
	weight1 = strlen(last);
	printf("%*d %*d\n", weight, strlen(first), weight1, strlen(last));

	printf("%s %s\n", first, last);
	printf("%-*d %-*d\n", weight, strlen(first), weight1, strlen(last));

	getchar();
	getchar();
	getchar();
	return 0;
	


}