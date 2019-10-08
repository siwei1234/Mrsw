#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void f(int n)
{
	if (n > 9)
	{
		f(n / 10);
	}
	printf("%d\t", n % 10);
}
int main()
{
	int a = 0;
	printf("«Î ‰»Î ˝◊÷£∫");
	scanf("%d", &a);
	f(a);
	return 0;
}