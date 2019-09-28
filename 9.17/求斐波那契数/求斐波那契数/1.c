#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
	int a, b;
	scanf("%d", &a);
	b = f(a);
	printf("%d", b);
	return 0;
}