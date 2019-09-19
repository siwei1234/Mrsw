#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double fun(int n)
{
	double i;
	double S=0;
	for (i = 1; i <= n; i++)
	{
		S = S +( 1 / (i*(i + 1)));
	}
	return S;
}
int main()
{
	int a = 10;
	double c;
	c=fun(a);
	printf("%lf", c);
	system("pause");
	return 0;
}