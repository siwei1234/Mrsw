#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n", sizeof(&a[0] + 1));
	char b[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(b + 0));
	printf("%d\n", sizeof(*b));
	printf("%d\n", sizeof(b[1]));
	printf("%d\n", sizeof(&b));
	printf("%d\n", sizeof(&b + 1));
	printf("%d\n", sizeof(&a[0] + 1));
	return 0;
}