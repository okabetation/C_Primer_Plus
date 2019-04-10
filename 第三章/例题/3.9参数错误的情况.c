#include <stdio.h>
int main(void)
{
	int a = 2;
	int b = 3;
	float i = 3.f;
	float j = 4.f;

	printf("%d\n", a);							//printf("%d\n", a, b);	参数太多
	printf("%d,%d\n",a,b);						//printf("%d %d\n", a); 参数太少
	printf("%f %f\n",i,j);						//printf("%d %d\n", i, j);值得类型不匹配
	getchar();
	return 0;
}