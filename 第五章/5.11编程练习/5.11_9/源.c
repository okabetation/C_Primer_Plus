#include <stdio.h>
void Temperatures(double i);
int main(void)
{
	double hua;
	printf("请输入一个华氏温度℉:");
	while (scanf("%lf", &hua)== 1)
	{
		Temperatures(hua);
		printf("请输入一个华氏温度℉(输入q退出):");
	}
	printf("done");
	getchar();
	getchar();
	getchar();
	return 0;
}
void Temperatures(double i)
{
	const double s1 = 5.0, s2 = 9.0, s3 = 32.0, k = 273.16;
	double she = s1 / s2 * (i - s3);
	double kai = she + 237.16;
	printf("华氏温度=%.3lf℉ 摄氏温度=%.3lf℃ 开氏温度=%.3lfK\n", i,she,kai);
}