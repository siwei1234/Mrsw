#include<stdio.h>
#include<malloc.h>
void gameOfLife(int board[][3], int boardSize, int* boardColSize) {
	int m = boardSize + 2;
	int n = (*boardColSize) + 2;
	int** ret = (int**)malloc(sizeof(int*)*m);
	int** tmp = (int**)malloc(sizeof(int*)*m);
	for (int i = 0; i < m; i++)
	{
		ret[i] = (int*)malloc(sizeof(int)*n);
		tmp[i] = (int*)malloc(sizeof(int)*n);
		memset(ret[i], 0, sizeof(int)*n);
		memset(tmp[i], 0, sizeof(int)*n);
	}
	for (int i = 0; i < m - 2; i++)
	{
		for (int j = 0; j < n - 2; j++)
		{
			ret[i + 1][j + 1] = board[i][j];
			tmp[i + 1][j + 1] = board[i][j];
		}
	}
	for (int i = 1; i < m - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			int res = ret[i - 1][j - 1] + ret[i - 1][j] + ret[i - 1][j + 1] + ret[i][j - 1] + ret[i][j + 1] + ret[i + 1][j - 1] + ret[i + 1][j] + ret[i + 1][j + 1];
			if (ret[i][j] == 1)
			{
				if (res < 2 || res > 3)
					tmp[i][j] = 0;
			}
			else
			{
				if (res == 3)
					tmp[i][j] = 1;
			}
		}
	}
	for (int i = 0; i < m - 2; i++)
	{
		for (int j = 0; j < n - 2; j++)
		{
			board[i][j] = tmp[i + 1][j + 1];
		}
	}
	free(ret);
	free(tmp);
}
int main()
{
	int board[4][3] = { {0,1,0}, {0,0,1}, {1,1,1,}, {0,0,0} };
	int size = 3;
	gameOfLife(board, 4, &size);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}