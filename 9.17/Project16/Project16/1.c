#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, n=0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 10 == 9)n++;
		if (i / 10 == 9)n++;
	}
	printf("%d", n);
	return 0;
}