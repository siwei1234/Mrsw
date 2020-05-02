#include<stdio.h>

int majorityElement(int* nums, int numsSize) {
	int ret;
	int count = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (count == 0)
		{
			ret = nums[i];
			count++;
		}
		else
		{
			if (ret == nums[i])
				count++;
			else
				count--;
		}
	}
	return ret;
}

int main()
{
	int nums[7] = { 2,2,2,2,5,5,5 };
	printf("%d\n", majorityElement(nums, 7));
	return 0;
}