#include<stdio.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	while (m && n)
	{
		if (nums1[m - 1] > nums2[n - 1])
		{
			nums1[m + n - 1] = nums1[m - 1];
			m--;
		}
		else
		{
			nums1[m + n - 1] = nums2[n - 1];
			n--;
		}
	}
	while (n)
	{
		nums1[n - 1] = nums2[n - 1];
		n--;
	}
}
int main()
{
	int arr1[] = { 1,5,7,0,0,0 };
	int arr2[] = { 2,5,10 };
	merge(arr1, 6, 3, arr2, 3, 3);
	for (int i = 0; i < 6; i++)
	{
		printf("%d	", arr1[i]);
	}
}