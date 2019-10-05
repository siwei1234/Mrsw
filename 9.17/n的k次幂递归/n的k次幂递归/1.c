#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int pow(int n, int k)
{
	if (k > 1)
	{
		return n*pow(n, k - 1);
	}
	else
	{
		return n;
	}
}
int main()
{
	int n = 0, k = 0;
	int a;
	scanf("%d%d", &n, &k);
	a = pow(n, k);
	printf("%d\n", a);
	return 0;
}