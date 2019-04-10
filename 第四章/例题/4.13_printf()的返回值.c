#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	/*printf()执行了打印信息和给变量赋值两项任务，
	其次，注意计算针对所有字符数，包括空格和不可见的换行符（\n）
	*/
	rv = printf("%d F is Water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);
	getchar();
	return 0;

}