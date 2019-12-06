#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void revser(int* arr, int left, int right)
{
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void f(int* arr, int k, int size)
{
	int ret = size;
	revser(arr, 0, size -1 );
	int i = 0;
	int next = 0;
	while (k != 0 || size > 0)
	{
		int a = k % 10;
		k = k / 10;
		int tmp = arr[i] + a + next;
		if (tmp > 9)
		{
			arr[i] = tmp % 10;
			next = 1;
		}
		else
		{
			next = 0;
			arr[i] = tmp;
		}
		i++;
		size--;
	}
	if (next == 1)
	{
		arr[i] = next;
		revser(arr, 0, ret);
	}
	else
	{
		revser(arr, 0, ret - 1);
	}
	return arr;
}
int main()
{
	int arr[] = {0,1,1,2,4};
	int a = 9035;
	f(arr, a, sizeof(arr) / sizeof(arr[0]));
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}