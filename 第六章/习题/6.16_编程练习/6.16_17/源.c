#include <stdio.h>
int main(void)
{
	double m;
	int n;
	for (m = 1000000.0,n=0; m > 0;n++)
	{
		m *= 1.08;
		m -= 100000.0;
		printf("%lf\n", m);
	}
	printf("%dÄêºó", n);

	getchar();
	return 0;
}

/*
#include <stdio.h>

int main(void)
{
	int year = 0;
	double sum = 1000000.0;

	while (sum > 0)
	{
		sum *= 1.08;
		sum -= 100000.0;
		year++;
		printf("%lf\n", sum);
	}

	printf("%d", year);

	getchar();
	return 0;

}



*/