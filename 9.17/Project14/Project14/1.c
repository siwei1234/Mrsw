#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	char t;
	char a[6] = "hello\0";
	char b[6] = "world\0";
	for (i = 0; i < 5; i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	printf("%s,%s", a, b);
	return 0;
}