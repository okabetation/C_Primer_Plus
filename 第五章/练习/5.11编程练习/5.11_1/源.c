//测试成功,使用自定义函数
#include <stdio.h>
#define hour 60
int time(int a);
int main(void)
{
	int Time,min;
	printf("请输入时间进行换算,输入0退出：\n");
	scanf("%d", &min);
	while (min > 0)
	{
		Time = time(min);
		scanf("%d", &min);
		printf("请输入时间进行换算,输入0退出：\n");
	}
	printf("bye\n");
	getchar();
	getchar();
	return 0;
}
int time(int a)
{
	int time=0;
	int min = a;
	if (min > 60)
	{
		time = min / hour;
		min = min % hour;
		printf("%dh/%dmin\n",time,min);
	}
	else {
		printf("%dh/%dmin\n", time, min);
	}
	return time;
}
/*输入0时会出错
#include <stdio.h>
#define hour 60
int time(int a);
int main(void)
{
	int Time,min;
	scanf("%d", &min);
	Time = time(min);
	printf("pause");
	system("pause");
}
int time(int a)
{
	int min = a;
	int time;
	
	while (min> 0)
	{
		time = min / hour;
		printf("%.2dh/%.2dm\n", time, min);
		min = 0;
		scanf("%d", &min);
	}
	return time;
}



官方参考答案
#include <stdio.h>
int main(void)
{
	const int minperhour = 60;
	int minutes, hours, mins;
	printf("Enter the number of minutes to convert: ");
	scanf("%d", &minutes);
	while (minutes > 0 )
	{         hours = minutes / minperhour;
	mins = minutes % minperhour;
	printf("%d minutes = %d hours, %d minutes\n", minutes, hours, mins);
	printf("Enter next minutes value (0 to quit): ");
	scanf("%d", &minutes);
	}     printf("Bye\n");
	return 0;
}
*/