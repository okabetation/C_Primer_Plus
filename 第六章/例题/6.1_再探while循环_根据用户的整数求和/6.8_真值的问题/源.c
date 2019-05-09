//误用=会导致无限循环
#include <stdio.h>
int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed");
	printf("(q to quit):");
	status = scanf("%ld", &num);
	while (status = 1)				//staus=1是指赋值为1 而不是进行判断， 应为status==1
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit):");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);
	system("pause"); 
	return 0;
}