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
void ever(int* arr, int k, int size)
{
	k %= size;
	revser(arr, 0, size - 1);
	revser(arr, 0, k - 1);
	revser(arr, k, size - 1);
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	ever(arr, 4, 8);
	for (size_t i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}