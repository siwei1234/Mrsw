#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) {
	int count = 0;
	int size = numsSize;
	for (int i = 0; i < size; i++)
	{
		if (nums[i] == val)
		{
			for (int j = i; j < size - 1; j++)
			{
				nums[j] = nums[j + 1];
			}
			nums[numsSize - 1] = val;
			count++;
			size--;
			i--;
		}
	}
	return numsSize - count;
}
int main()
{
	int arr[] = { 0,1,2,2,3,0,4,2 };
	printf("%d\n", removeElement(arr, 8, 2));
	return 0;
}