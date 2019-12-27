#include<stdio.h>
void duplicateZeros(int* arr, int arrSize) {
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == 0)
		{
			for (int j = arrSize - 1; j > i; j--)
			{
				arr[j] = arr[j - 1];
			}
			i++;
		}
	}
}
int main()
{
	int arr[10] = { 0,1,2,3,4,0,5,5,0,1};
	duplicateZeros(arr, 10);
	for (int i = 0; i < 10; i++)
		printf("%d", arr[i]);
}