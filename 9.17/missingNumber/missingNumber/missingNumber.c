#include<stdio.h>
int missingNumber(int* nums, int numsSize) {
	int ret = numsSize;
	for (int i = 0; i < numsSize; i++)
	{
		ret ^= nums[i];
		ret ^= i;
	}
	return ret;
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,7,8 };
	int ret = missingNumber(arr, 8);
	printf("%d", ret);
}