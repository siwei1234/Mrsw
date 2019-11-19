#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum = 20;
	int battle = 20;
	while (battle != 0 && battle != 1)
	{
		sum += battle / 2;
		battle = battle / 2 + battle % 2;
	}
	printf("%d", sum);
	return 0;
}