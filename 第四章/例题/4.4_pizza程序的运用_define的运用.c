#include <stdio.h>
#define PI 3.14159
int main(void)
{
	float area, circum, radius;			//面积；圆周，周长；半径

	printf("What is the redius of your pizza?\n");
	scanf("%f", &radius);
	area = PI * radius*radius;
	circum = 2.0*PI*radius;
	printf("Your basic pizza parameters are as follows:\n");		//basic基本的;parmeters参数;as follows列举如下;
	printf("circumference=%1.2f,area=%1.2f\n", circum, area);		//circumference周长；%1.2f；1表示宽度为1，.2表示输出两位小数
	getchar();
	getchar();
	return 0;

}