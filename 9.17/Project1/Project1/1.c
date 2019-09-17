#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, sum=1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum * i;
			printf("%d\t", sum);
	}
	getchar();
	return 0;
}