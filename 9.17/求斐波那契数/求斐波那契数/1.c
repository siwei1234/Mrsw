#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f_(int n)
{
	if (n > 2)
		return f_(n - 1) + f_(n - 2);
	else
		return 1;
}
int f(int n)
{
	int a, c;
	int b =a = c = 1;
	while (n > 2)
	{
		a = b;
		b = c;
		c = a + b;
		n--;
	}
	return c;
}
int main()
{
	int a, b, c;
	scanf("%d", &a);
	b = f(a);
	printf("%d\n", b);
	c = f_(a);
	printf("%d\n", c);
	return 0;
}