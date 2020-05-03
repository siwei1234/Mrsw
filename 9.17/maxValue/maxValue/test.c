#include<stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}


int maxValue(int grid[][3], int gridSize, int* gridColSize) {
	if (grid == NULL || gridSize == 0)
		return 0;
	for (int i = 1; i < gridSize; i++)
	{
		grid[i][0] += grid[i - 1][0];
	}
	for (int i = 1; i < (*gridColSize); i++)
	{
		grid[0][i] += grid[0][i - 1];
	}
	for (int i = 1; i < gridSize; i++)
	{
		for (int j = 1; j < (*gridColSize); j++)
		{
			grid[i][j] += max(grid[i - 1][j], grid[i][j - 1]);
		}
	}
	return grid[gridSize - 1][(*gridColSize) - 1];
}

int main()
{
	int ret[][3] = { {1, 3, 1},{1, 5, 1},{4, 2, 1} };
	int size = 3;
	printf("%d\n", maxValue(ret, 3, &size));

	return 0;
}