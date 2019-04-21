#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);			/*在待打印的值大于有符号值的最大值时，无符号数和有符号数打印的值不相同；对于较小的正数，有符号和无符号类型的存储，显示都相同
													%u表示的是无符号整数(unsigned)；%d是以是十进制格式输出
													*/
	printf("end = %hd and %d\n",end,end);			/*
													%h是以short类型进行输出，值相同是因为在给函数传递参数时，C编译器把short类型的值自动转化为int类型的值
													之所以转换时因为int类型的参数传递速度更快；使用h修饰符可以显示较大的整数被截断成short类型的情况，big就演示了这个情况
													65537以二进制格式写成一个32位的数，使用%hd只会查看后16位，所以显示的值是1
													*/
	printf("big = %ld and not %hd\n",big,big);
	printf("verybig = %lld and not %ld\n",verybig,verybig);		/*先输出了完整值，然后由于使用了%ld，所以只输出显示了储存在后32位的值*/
	getchar();
	return 0;

}