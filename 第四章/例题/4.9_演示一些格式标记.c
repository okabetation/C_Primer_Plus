#include <stdio.h>
int main(void)
{
	printf("%x %X %#x\n", 31, 31, 31);
	printf("**%d**% d**% d**\n", 42,42, -42);	//在转换说明中用空格在输出的正值前面生成前导空格，赋值前面不产生前导空格
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);	//0标记和精度一起出现，0标记会被忽略
	getchar();
	return 0;
}