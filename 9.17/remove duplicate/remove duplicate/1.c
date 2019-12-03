#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void f(int* arr, int size)
{
	int str1 = 0;
	int str2 = 1;
	int des = 0;
	while (str2 < size)
	{
		arr[des++] = arr[str1];
		if(arr[str1] != arr[str2])
		{
			str1++;
			str2++;
		}
		else
		{
			str2++;
			str1 = str2;
			str2++;
		}
	}
	if (str1 < size)
	{
		arr[des] = arr[str1];
	}
}
int main()
{
	int arr[] = { 1,1,2,2,3,4,5,5,6 };
	f(arr, 9);
	for (size_t i = 0; i < 9; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}