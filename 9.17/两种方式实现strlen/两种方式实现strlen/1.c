#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int f(char* s)
{
	int n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	return n;
}
int fa(char* s)
{
	if (*s != '\0')
	{
		return fa(s+1) + 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int b, c;
	char a[] = "hello";
	b = f(a);
	printf("%d\n", b);
	c = fa(a);
	printf("%d\n", c);
	return 0;
}