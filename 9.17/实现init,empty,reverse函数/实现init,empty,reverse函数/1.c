#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
}
void empty(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int sz)
{
	int i, t;
	for (i = 0; i < sz / 2; i++)
	{
		t = arr[i];
		arr[i] = arr[sz - i - 1];
		arr[sz - i - 1] = t;
	}
}
int main()
{
	int arr[] = { 2,3,6,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	empty(arr, sz);
	init(arr, sz);
	reverse(arr, sz);
	return 0;
}