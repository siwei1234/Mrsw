#include<stdio.h>
void find(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}
int lastStoneWeight(int* stones, int stonesSize) {
	for (int i = 0; i < stonesSize - 1; i++)
	{
		find(stones, stonesSize);
		stones[stonesSize - 1] = stones[stonesSize - 1] - stones[stonesSize - 2];
		stones[stonesSize - 2] = 0;
	}
	return stones[stonesSize - 1];
}
int main()
{
	int arr[] = { 2,7,4,1,8,1 };
	int ret = lastStoneWeight(arr, 6);
	printf("%d", ret);
	return 0;
}