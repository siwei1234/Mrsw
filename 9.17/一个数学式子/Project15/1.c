#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i,n;
	double sum=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)n = 1;
		if (i % 2 == 0)n = -1;
		sum = sum + n*(1.0 / i);
	}
	printf("%lf",sum);
	return 0;
}