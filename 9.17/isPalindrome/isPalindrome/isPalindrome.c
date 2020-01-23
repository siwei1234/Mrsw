#include<stdio.h>
int isPalindrome(int x) {
	int x1 = x;
	long int y = 0;
	if (x < 0)
		return 0;
	while (x1 != 0)
	{
		y = y * 10 + x1 % 10;
		x1 = x1 / 10;
	}
	return y == x;
}
int main()
{
	printf("%d", isPalindrome(2147483647));
	return 0;
}