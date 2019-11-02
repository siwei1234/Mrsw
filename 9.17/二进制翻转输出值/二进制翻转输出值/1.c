#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
unsigned int f(unsigned int n)
{
	unsigned int ret = 0;
	for (int i = 0; i < 32; ++i)
	{
		ret += ((n >> i) & 1) * pow(2, 31 - i);
	}
	return ret;
}
int main()
{
	unsigned int a;
	printf("ÇëÊäÈëÊı×Ö£º\n");
	scanf("%u",&a);
	printf("%u", f(a));
	return 0;
}