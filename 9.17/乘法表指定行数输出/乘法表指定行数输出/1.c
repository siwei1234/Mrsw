#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}