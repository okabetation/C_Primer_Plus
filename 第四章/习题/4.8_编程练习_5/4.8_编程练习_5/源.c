#include <stdio.h>
int main(void)
{
	float Mb, MB, time;
	printf("请输入您的下载速度Mb/s和您的文件大小MB：\n");
	scanf("%f %f", &Mb, &MB);
	time = MB *8/ Mb;
	printf("at %.2f megabits per second,a file of %.2f megabytes\n",Mb,MB);
	printf("downloads in %.2f seconds.\n", time);
	getchar();
	getchar();
	return 0;
}
