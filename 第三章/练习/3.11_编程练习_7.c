/*1英寸相当于2.54厘米，编写一个程序：根据用户输入身高（/英寸），然后以厘米为单位显示身高*/
#include <stdio.h>
int main(void)
{
	float x = 2.54f;				//声明一个float类型的x变量，x为厘米
	float y;					//声明一个y，用来读取键盘输入的值，y为英寸
	printf("请输入您的身高(英寸)：");
	scanf("%f",&y);
	printf("您的身高为（厘米）:%f",x*y);		//身高英寸*厘米=身高身高
	getchar();
	getchar();
	return 0;
}