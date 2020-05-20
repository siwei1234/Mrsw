#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int waysToStep(int n) {
	int a = 1;
	int b = 1;
	int c = 2;
	int d = 4;
	if (n <= 2)
		return n;
	if (n == 3)
		return 4;
	while (n > 3)
	{
		a = b % 1000000007;
		b = c % 1000000007;
		c = d % 1000000007;
		d = ((a + b) % 1000000007 + c) % 1000000007;
		n--;
	}
	return d;
}

int main()
{
	printf("%d\n", waysToStep(10));
	return 0;
}