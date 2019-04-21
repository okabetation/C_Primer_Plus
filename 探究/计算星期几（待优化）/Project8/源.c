/*求星期几*/
#include <stdio.h>
int main()
{
	int a = 7;
	int b;
	scanf("%d", &b);
	if (b <= 7) {
		printf("星期%d",b);
	}
	else if (b < 14) {
		printf("星期%d\n", 31 - b - a - a);
	}
	else if (b < 21) {
		printf("星期%d\n", 31 - b - a - a - a);
	}
	else if (b < 28) {
		printf("星期%d\n", 31 - b - a - a - a - a);
	}
	else if(b>31){
		printf("出错");
	}
	getchar();
	getchar();
	return 0;

}