#include<stdio.h>
int containsDuplicate(int* nums, int numsSize)
{
	int i, j, tmp;
	for (i = 1; i < numsSize; i++)
	{
		tmp = nums[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (nums[j] == tmp)
			{
				return 1;
			}
			else if (nums[j] < tmp)
			{
				nums[j + 1] = tmp;
				break;
			}
			else
			{
				nums[j + 1] = nums[j];
			}
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6};
	printf("%d", containsDuplicate(arr, 6));
}