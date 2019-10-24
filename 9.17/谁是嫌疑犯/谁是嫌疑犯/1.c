#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sum;
	for (sum = 1; sum <= 4; sum++)
	{
		if ((sum != 1) + (sum == 3) + (sum == 4) + (sum != 4) == 3)
		{
			printf("%d", sum);
		}
	}
	return 0;
}