#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fa(int m, int n)
{
	int t;
	t = m;
	m = n;
	n = t;
	return 0;
}
int f(int *m, int *n)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
	return 0;
}
int main()
{
	int a = 10, b = 20;
	fa(a, b);
	printf("%d\t%d\n", a, b);
	f(&a, &b);
	printf("%d\t%d\n", a, b);
	return 0;
}