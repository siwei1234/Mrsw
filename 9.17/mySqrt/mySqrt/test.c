#include<stdio.h>
int mySqrt(int x) {
	long i = 0;
	long ret = 0;
	while (ret <= x)
	{
		if (ret == x)
			return i;
		i++;
		ret = i * i;
	}
	return i - 1;
}
int main()
{
	printf("%d", mySqrt(100));
	return 0;
}