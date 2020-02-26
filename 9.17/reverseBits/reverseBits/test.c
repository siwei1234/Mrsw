#include<stdio.h>
unsigned int reverseBits(unsigned int n) {
	unsigned int ret = 0;
	int i = 32;
	while (i--)
	{
		ret <<= 1;
		ret += n & 1;
		n >>= 1;
	}
	return ret;
}
int main()
{
	printf("%d", reverseBits(10));
	return 0;
}