#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int a, b;
	for (i = 0; i <= 100000; i++)
	{
		a = sqrt(i + 100);
		b = sqrt(i + 168);
		if ((a*a == i + 100) && (b*b == i + 168))
		{
			printf("%d ", i);
		}
	}
	return 0;
}