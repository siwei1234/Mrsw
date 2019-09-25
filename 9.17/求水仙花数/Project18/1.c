#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, a, b, c;
	for (i = 0; i < 1000; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i == a * a*a + b * b*b + c * c*c)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}