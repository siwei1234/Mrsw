#include<stdio.h>
int f(int n)
{
	int a;
	int b = 0;
	int c = 0;
	while (n)
	{
		a = n % 10;
		if (a == 3 || a == 4 || a == 7)
			return 0;
		if (a == 0 || a == 1 || a == 8)
			c++;
		b++;
		n = n / 10;
	}
	if (c == b)
		return 0;
	return 1;
}
int rotatedDigits(int N) {
	int ret = 0;
	for (int i = 0; i <= N; i++)
	{
		if (f(i))
			ret++;
	}
	return ret;
}
int main()
{
	int ret = rotatedDigits(10);
	printf("%d", ret);
}