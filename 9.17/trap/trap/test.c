#include<stdio.h>
int trap(int* height, int heightSize) {
	int left = 0;
	int cl = 1;
	int right = heightSize - 1;
	int cr = heightSize - 2;
	int water = 0;
	while (cl <= right && cr >= left)
	{
		if (height[left] > height[right])
		{
			if (height[cr] < height[right])
			{
				water += (height[right] - height[cr]);
			}
			else
				right = cr;
			cr--;
		}
		else
		{
			if (height[cl] < height[left])
			{
				water += (height[left] - height[cl]);
			}
			else
				left = cl;
			cl++;
		}
	}
	return water;
}
int main()
{
	int arr[] = { 0,1,0,2,1,0,1,3,2,1,2,1 };
	printf("%d\n", trap(arr, 12));
	return 0;
}