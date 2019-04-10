/*打印系统的各类型的大小*/
#include <stdio.h>
int main(void)
{		
	//c99为类型大小提供%zd转换说明；不支持c99和c11的编译器可用%u或%lu代替%zd
	//sizeof以字节为单位给出指定类型的大小
	printf("Type int has a size of %zd bytes.\n",sizeof(int));
	printf("Type chat has a size of %zd bytes.\n",sizeof(char));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	printf("Type long has a size of %zd bytes,\n", sizeof(long long));
	printf("Type double has a size of %zd bytes.\n",sizeof(double));
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
	getchar();
	return 0;

}