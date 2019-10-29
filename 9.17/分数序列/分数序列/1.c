#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, t;
	float sum = 0;
	float a = 2, b = 1;
	for (i = 1; i <= 20; i++)
	{
		sum = sum + a / b;
		t = a;
		a = a + b;
		b = t;
	}
	printf("%f\n", sum);
}