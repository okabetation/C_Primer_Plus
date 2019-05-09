#include <stdio.h>
int main(void)
{
	const int code = 123456;
	int cipher,number;
	char a[20] = "y";
	char c[20];
	bika:	for (number = 0; code != cipher, number < 3; number++)
		{
			printf("请输入密码：");
			scanf("%d", &cipher);
		}
			if (code == cipher)
				printf("欢迎您第411231位管理员");
			else
				printf("三次密码为错误，是否继续y/n:\n");
			scanf("%s", c);
			if (c != a)
				printf("你好");
			else
				printf("done");

	getchar();
	getchar();
	return 0;
}