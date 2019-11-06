#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[2][5] = { 0 };
	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", a + 1);
	printf("%p\n", &a + 1);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(&a));
	printf("%p\n", a[0]);
	printf("%p\n", &a[0]);
	printf("%p\n", a[0] + 1);
	printf("%p\n", &a[0] + 1);
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(&a[0]));
	return 0;
}