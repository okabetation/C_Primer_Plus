#include <stdio.h>
#define L 3.785
#define KM 1.609
int main(void)
{
	float a, b,i,j;
	printf("请输入旅行的行程/英里，消耗的汽油量/加仑：\n");
	scanf("%f %f", &a, &b);
	printf("每加仑行驶%.1f英里\n", b/ a);
	i = b * L;	 //汽油量L		
	j = a * KM*100;	//100公里的路程
	printf("每100公里耗%.1f升\n", j / i);
	getchar();
	getchar();
	return 0;
}