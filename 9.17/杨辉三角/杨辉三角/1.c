#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 20
int main()
{
	int i, j, k;
	int n = 0;
	printf("«Î ‰»Î–– ˝£∫\n");
	scanf("%d", &n);
	int b[N][N] = { 0 };
	for (i = 0; i < n; i++)
	{
		b[i][0] = b[i][i] = 1;
	}
	for (i = 2; i < n; i++)
		for (j = 1; j < i; j++)
		{
			b[i][j] = b[i - 1][j - 1] + b[i - 1][j];
		}
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < n - i; k++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf(" %d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}