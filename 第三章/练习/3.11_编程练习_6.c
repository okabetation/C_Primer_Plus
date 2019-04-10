/*一个水分子的质量约为3.0X10e-23克.一夸脱水大约是960克.
编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量
*/
#include <stdio.h>
int main(void)
{
	float a = 3.0e-23;
	float b;
	float c = 950;

	printf("请输入水的夸脱数：");
	scanf("%f", &b);
	printf("水分子的数量为：%f", b*c / a);
	getchar();
	getchar();
	return 0;

}