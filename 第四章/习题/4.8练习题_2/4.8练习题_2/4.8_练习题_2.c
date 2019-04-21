#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[20];
	int weight;
	printf("请输入您的名字：\n");
	scanf("%s", &name);
	weight = strlen(name) + 3;
	printf("\"%s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("%*s\n", weight, name);
	getchar();
	getchar();
	return 0;

}