#include<stdio.h>
int reverse(int x) {
	int max = 0x7fffffff;
	int min = 0x80000000;
	long ret = 0;
	while (x != 0)
	{
		ret = ret * 10 + x % 10;
		x = x / 10;
	}
	return (ret > max || ret < min) ? 0 : ret;
}
int main()
{
	printf("%d", reverse(4321));
	return 0;
}