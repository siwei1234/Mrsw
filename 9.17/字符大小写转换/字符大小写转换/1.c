#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a;
	while (1)
	{
		scanf("%c", &a);
		if ((a >= 'a')&&(a <= 'z'))
		{
			printf("%c\n", a - 32);
		}
		else if ((a >= 'A') && (a <= 'Z'))
		{
			printf("%c\n", a + 32);
		}
	}
	return 0;
}