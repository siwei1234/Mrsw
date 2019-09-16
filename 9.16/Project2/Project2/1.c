#include<stdio.h>
int main()
{
	int i, j, n;
	for (i = 1; i <= 9; i++)
		for (j = i; j <= 9; j++)
		{
			n = i * j;
			printf("%d*%d=%d\t", i, j, n);
		}
	getchar();
	return 0;
}