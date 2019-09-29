#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void move(char m, char n)
{
	printf("%c->%c\n", m, n);
	return 0;
}
void f_han(int e, char a, char b, char c)
{
	if (e == 1)
	{
		move(a, c);
	}
	else
	{
		f_han(e - 1, a, c, b);
		move(a, c);
		f_han(e - 1, b, a, c);
	}
	return 0;
}
int main()
{
	int a, c;
	scanf("%d", &a);
	f_han(a, 'A', 'B', 'C');
	return 0;
}