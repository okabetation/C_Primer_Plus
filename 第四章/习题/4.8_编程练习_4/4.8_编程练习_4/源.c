#include <stdio.h>
#include <string.h>
#define M 100
int main(void)
{
	float stature, stature1;
	char name[20];
	printf("请输入您的姓名：\n");
	scanf("%s", &name);
	printf("请输入您的身高/cm：\n");
	scanf("%f", &stature);
	stature1 = stature / M;
	printf("%s, you are %.3f feet tall\n",name,stature1);
	getchar();
	getchar();
	return 0;
}