#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, k;
	for (i = 0; i <= 6; i++)
	{
		for (j = 0; j <= 5 - i; j++)
			printf(" ");
		for (k = 0; k <= 2 * i; k++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf(" ");
		for (k = 0; k <= 10 - 2 * i; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}