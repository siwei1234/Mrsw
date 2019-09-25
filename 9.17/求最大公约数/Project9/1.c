#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	int a, b, c, d,e;
	scanf("%d%d", &a, &b);
	c = a > b ? a : b;
	d = a < b ? a : b;
	e = c % d;
	while (e != 0)
	{
		c = d;
		d = e;
		e = c % d;
	}
	printf("%d", d);
	system("pause");
	return 0;
}