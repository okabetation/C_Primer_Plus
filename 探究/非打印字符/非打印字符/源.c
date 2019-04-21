//转义序列警报的用法	https://zhidao.baidu.com/question/396791082.html
#include <stdio.h>
#include <windows.h>
int main()
{
	int n;
	int b = 20;
	for (n = 0;n < 21;n++)
	{
		printf("\a");
		printf("%d\n", b - n);
		Sleep(500);    // 延迟 500 毫秒
	}
	getchar();
	return 0;
}
