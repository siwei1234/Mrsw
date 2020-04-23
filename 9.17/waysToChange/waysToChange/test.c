#include<stdio.h>

int waysToChange(int n) {
	int ret = 0;
	for (int i = 0; i <= n / 25; i++)
	{
		int tmp = n - (i * 25);
		ret = (ret + (((tmp / 5 + 1 + (long long int)(tmp % 10) / 5 + 1)*(tmp / 10 + 1)) / 2)) % 1000000007;
	}
	return ret;
}

int main()
{
	printf("%d\n", waysToChange(900750));
	return 0;
}