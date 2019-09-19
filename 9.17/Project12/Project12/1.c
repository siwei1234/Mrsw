#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float fun(int m, int n)
{
	float i, a = 1, b = 1, c = 1;
	for (i = 1; i <= m; i++)
		a = a * i;
	for (i = 1; i <= n; i++)
		b = b * i;
	for (i = 1; i <= (m - n); i++)
		c = c * i;
	return a/(b*c);
}
int main()
{
	int a = 12, b = 8;
	float c;
	c = fun(a, b);
	printf("%f", c);
	system("pause");
	return 0;
}