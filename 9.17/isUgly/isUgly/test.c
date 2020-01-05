#include<stdio.h>
int isUgly(int num) {
	if (num < 1)
		return 1;
	while (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
	{
		if (num % 2 == 0)
			num = num / 2;
		if (num % 3 == 0)
			num = num / 3;
		if (num % 5 == 0)
			num = num / 5;
	}
	if (num == 1)
		return 1;
	return 0;
}
int main()
{
	int a = 10;
	printf("%d", isUgly(a));
	return 0;
}
