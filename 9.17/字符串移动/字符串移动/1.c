#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char a[] = "hello world";
	char b[] = "###########";
	int left = 0;
	int right = strlen(a) - 1;
	printf("%s\n", b);
	while (left <= right)
	{
		Sleep(1000);
		b[left] = a[left];
		b[right] = a[right];
		left++;
		right--;
		printf("%s\n", b);
	}
	return 0;
}