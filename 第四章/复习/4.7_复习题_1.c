/*再次运行程序清单4.1 但是在要求输入名时 输入名和姓
（根据英文书写习惯，名和姓中间有空格），看看会发生什么，为什么
*/

#include <stdio.h>
#include <string.h>			//提供strlen（）函数的原型
#define DENSITY 62.4	//人体密度（单位：磅/立方英尺）

int main()
{
	float weight, volume;
	int size, letters;
	char name[40];		//name 是一个可容纳40字符的数组

	printf("Hi! what's your first name?\n");
	scanf("%s", name);
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);
	system("pause");
	return 0;



}

/*程序不能正常运行。第一个scanf（）语句只读取用户名输入的名，
而用户输入的姓仍留在输入缓冲区中（缓冲区是用于储存输入的临时存储区）
下一条scanf()语句在输入缓冲区查找重置时，从上次读入结束的地方开始读取
这样就把留在缓冲区的姓作为体重来读取，导致scanf()读取失败
另一方面，如果要求输入姓名时输入lasha 144，那么程序会把144作为用户的
体重（然而用户是在程序提示输入体重之前输入144）*/