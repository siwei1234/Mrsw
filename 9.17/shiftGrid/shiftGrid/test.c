/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<malloc.h>


void reverse(int* arr, int left, int right)
{
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int** shiftGrid(int grid[][3], int gridSize, int* gridColSize, int k) {
	int len = gridSize * (*gridColSize);
	int* ret = (int*)malloc(sizeof(int)*len);
	int index = 0;
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < (*gridColSize); j++)
		{
			ret[index++] = grid[i][j];
		}
	}
	k %= len;
	reverse(ret, 0, k - 1);
	reverse(ret, k, len - 1);
	reverse(ret, 0, len - 1);
	index = 0;
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < (*gridColSize); j++)
		{
			grid[i][j] = ret[index++];
		}
	}
	return grid;
}


int main()
{
	int a = 3;
	int ret[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	shiftGrid(ret, 3, &a, 1);
	return 0;
}