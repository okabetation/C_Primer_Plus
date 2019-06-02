#include <stdio.h>
double m1(int a);
double m2(int a);
int main(void)
{
	int a = 1;
	while (m1(a) >= m2(a))
	{
		a++;
	}
	printf("要%d年\n", a);
	printf("Daphne的投资额为:%lf\n", m1(a));
	printf("Deirdre的投资额为:%lf\n", m2(a));

	getchar();
	return 0;

}
double m1(int a)
{
	int n;
	double m = 100.0;
	for (n = 1; n <= a; n++)
	{
		m += 100 * 0.1;
	}
	return m;
}
double m2(int a)
{
	double m = 100.0;
	int n;
	for (n = 1; n <= a; n++)
	{
		m = m + m * 0.05;		//sum*=1.05;
	}
	return m;
}
