#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
void menu()
{
	printf("************************\n");
	printf("*******  1.play  *******\n");
	printf("*******  0.exit  *******\n");
	printf("************************\n");
}
void player(char b[ROW][COL], int row, int col)
{
	int m = 0, n = 0;
	while (1)
	{
		printf("请输入你的坐标：\n");
		scanf("%d%d", &m, &n);
		if (m > 0 && m <= row && n > 0 && n <= col)
		{
			if (' ' == b[m - 1][n - 1])
			{
				b[m - 1][n - 1] = '*';
				break;
			}
			else
			{
				printf("输入错误，请重输入：\n");
			}
		}
	}
}
void computer(char b[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	int m = 0, n = 0;
	while (1)
	{
		m = rand() % 3;
		n = rand() % 3;
		if (' ' == b[m][n])
		{
			b[m][n] = '#';
			break;
		}
	}
}
void remake(char b[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
			for (j = 0; j < col; j++)
			{
				if (j > col - 2)
				{
					printf(" %c ", b[i][j]);
				}
				else
				{
					printf(" %c |", b[i][j]);
				}
			}
			printf("\n");
			if (i < row - 1)
			{
				for (j = 0; j < col; j++)
				{
					if (j > col - 2)
					{
						printf("---");
					}
					else
					{
						printf("---|");
					}
				}
				printf("\n");
			}
	}
}
char win(char b[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		if (b[0][i] == b[1][i] && b[1][i] == b[2][i] && b[0][i] != ' ')
		{
			return b[0][i];
		}
		if (b[i][0] == b[i][1] && b[i][1] == b[i][2] && b[i][0] != ' ')
		{
			return b[i][0];
		}
	}
	if (b[0][0] == b[1][1] && b[1][1] == b[2][2] && b[1][1] != ' ')
	{
		return b[1][1];
	}
	if (b[2][0] == b[1][1] && b[1][1] == b[0][2] && b[1][1] != ' ')
	{
		return b[1][1];
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (b[i][j] == ' ')
			{
				return 'c';
			}
		}
	}
	return 'q';
}
void game()
{
	int i, j;
	char a;
	char b[ROW][COL] = { 0 };
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			b[i][j] = ' ';
		}
	}
	remake(b, ROW, COL);
	while (1)
	{
		player(b, ROW, COL);
		remake(b, ROW, COL);
		a = win(b, ROW, COL);
		if ('#' == a)
		{
			printf("电脑赢\n"); break;
		}
		if ('*' == a)
		{
			printf("玩家赢\n"); break;
		}
		if ('q' == a)
		{
			printf("平局\n"); break;
		}
		computer(b, ROW, COL);
		remake(b, ROW, COL);
		a = win(b, ROW, COL);
		if ('#' == a)
		{
			printf("电脑赢\n"); break;
		}
		if ('*' == a)
		{
			printf("玩家赢\n"); break;
		}
		if ('q' == a)
		{
			printf("平局\n"); break;
		}
	}
}