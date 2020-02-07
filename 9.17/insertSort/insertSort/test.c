#include<stdio.h>
void insertSort(int* nums, int numsSize)
{
	int i, j, tmp;
	for (i = 1; i < numsSize; i++)
	{
		tmp = nums[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (nums[j] < tmp)
			{
				nums[j + 1] = tmp;
				break;
			}
			else
			{
				int cur = nums[j + 1];
				nums[j + 1] = nums[j];
				nums[j] = cur;
			}
		}
	}
}
int main()
{
	int arr[5] = { 2,1,5,4,6 };
	insertSort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d	", arr[i]);
	}
	return 0;
}