#include<stdio.h>
int numRookCaptures(char** board, int boardSize, int* boardColSize) {
	int left, right;
	for (int i = 0; i < boardSize; i++)
	{
		for (int j = 0; j < (*boardColSize); j++)
		{
			if (board[i][j] == 'R')
			{
				left = i;
				right = j;
				break;
			}
		}
	}
	int ret = 0;
	for (int i = left - 1; i >= 0; i--)
	{
		if (board[i][right] == 'p')
		{
			ret++;
			break;
		}
		if (board[i][right] == 'B')
			break;
	}
	for (int i = left + 1; i < boardSize; i++)
	{
		if (board[i][right] == 'p')
		{
			ret++;
			break;
		}
		if (board[i][right] == 'B')
			break;
	}
	for (int j = right - 1; j >= 0; j--)
	{
		if (board[left][j] == 'p')
		{
			ret++;
			break;
		}
		if (board[left][j] == 'B')
			break;
	}
	for (int j = right + 1; j < (*boardColSize); j++)
	{
		if (board[left][j] == 'p')
		{
			ret++;
			break;
		}
		if (board[left][j] == 'B')
			break;
	}
	return ret;
}
int main()
{
	return 0;
}