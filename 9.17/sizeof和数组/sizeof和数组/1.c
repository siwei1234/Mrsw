#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void a(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void b(int ch[])
{
	printf("%d\n", sizeof(ch));
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 1));
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(ch + 1));
	a(arr);
	b(ch);
	return 0;
}