//根据用户键入的整数求和
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit)：");
	status = scanf("%ld", &num);
	while (status==1)					//此处while循环可替换为：while(scanf("%ld",&num)==1)
	{
		sum = sum + num;
		printf("Please enter next integer(q to quit):");
		status = scanf("%ld", &num);			//scanf成功读取一个整数，就把该数存入sum，并返回1
	}
	printf("Those integers sum to %ld.\n", sum);
	system("pause");
	return 0;
}
