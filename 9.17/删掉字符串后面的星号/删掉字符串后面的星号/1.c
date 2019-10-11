#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void f(char* a)
{
	while (*a != '\0')
	{
		a++;
	}
	a--;
	while (*a == '*')
	{
		a--;
	}
	*a = '\0';
}
int main()
{
	char a[] = "***ab*cd****efgh***********";
	f(a);
	printf("%s", a);
}