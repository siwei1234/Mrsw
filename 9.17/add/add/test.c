#include<stdio.h>
int add(int a, int b) {
	while (b)
	{
		int tmp = a ^ b;
		b = (unsigned int)(a & b) << 1;
		a = tmp;
	}
	return a;
}
int main()
{
	int a = 10;
	int b = 11;
	printf("%d", add(a, b));
	return 0;
}