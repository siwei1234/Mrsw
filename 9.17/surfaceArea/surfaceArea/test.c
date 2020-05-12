#include<stdio.h>
int surfaceArea(int grid[][2], int gridSize, int* gridColSize) {
	int ret = 0;
	for (int i = 0; i < gridSize; i++)
	{
		for (int j = 0; j < (*gridColSize); j++)
		{
			if (grid[i][j] != 0)
			{
				ret = ret + grid[i][j] * 6 - (grid[i][j] - 1) * 2;
				if (i + 1 < gridSize)
					ret -= 2 * (grid[i][j] > grid[i + 1][j] ? grid[i + 1][j] : grid[i][j]);
				if (j + 1 < (*gridColSize))
					ret -= 2 * (grid[i][j] > grid[i][j + 1] ? grid[i][j + 1] : grid[i][j]);
			}
		}
	}
	return ret;
}
int main()
{
	int arr[][2] = { {1,2},{2,6} };
	int a = 2;
	printf("%d\n", surfaceArea(arr, 2, &a));
	return 0;
}