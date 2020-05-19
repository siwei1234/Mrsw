#include<stdio.h>
#include<malloc.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int matrix[][4], int matrixSize, int* matrixColSize, int* returnSize) {
	int len = matrixSize * (*matrixColSize);
	int* ret = (int*)malloc(sizeof(int)*len);
	int index = 0;
	int r1 = 0, r2 = matrixSize - 1, c1 = 0, c2 = (*matrixColSize) - 1;
	while (r1 <= r2 || c1 <= c2)
	{
		for (int i = c1; i <= c2; i++)
		{
			if (index < len)
				ret[index++] = matrix[r1][i];
		}
		for (int i = r1 + 1; i <= r2; i++)
		{
			if (index < len)
				ret[index++] = matrix[i][c2];
		}
		for (int i = c2 - 1; i >= c1; i--)
		{
			if (index < len)
				ret[index++] = matrix[r2][i];
		}
		for (int i = r2 - 1; i > r1; i--)
		{
			if (index < len)
				ret[index++] = matrix[i][c1];
		}
		r1++, r2--, c1++, c2--;
	}
	*returnSize = index;
	return ret;
}

int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int b = 4;
	int returnSize;
	spiralOrder(a, 3, &b, &returnSize);
	return 0;
}