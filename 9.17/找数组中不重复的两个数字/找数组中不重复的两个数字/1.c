#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void find(int* arr, int sz)
{
	int i;
	int ret = 0;
	int index;
	int a = 0, b = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if((ret >>= i) & 1 == 1);
		{
			index = i;
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] >> index) & 1 == 1)
		{
			a ^= arr[i];
		}
		else
		{
			b ^= arr[i];
		}
	}
	printf("%d	%d", a, b);
}
int main()
{
	int a[10] = { 1,1,2,3,2,3,4,4,5,6 };
	find(a, 10);
	return 0;
}