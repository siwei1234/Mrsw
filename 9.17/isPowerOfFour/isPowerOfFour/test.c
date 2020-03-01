#include<stdio.h>
int isPowerOfFour(int num) {
	if (num < 0 || num & (num - 1))
		return 0;
	return num & 0x55555555;
}
int isPowerOfTwo(int n) {
	if (n == 1)
		return 1;
	if (n == 0 || n % 2 != 0)
		return 0;
	return isPowerOfTwo(n / 2);
}
int main()
{
	printf("%d\n", isPowerOfFour(16));
	printf("%d", isPowerOfTwo(15));
	return 0;
}