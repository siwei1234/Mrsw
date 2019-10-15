#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
void menu()
{
	printf("************************\n");
	printf("****     1.play     ****\n");
	printf("****     0.exit     ****\n");
	printf("************************\n");
}
void init(char a[ROWS][COLS],int row,int col)
{
	int i, j;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			a[i][j] = '*';
		}
	}
}
void show(char a[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
void set(char a[ROWS][COLS], int row, int col)
{
	int i, j, n = EASY;
	while(n)
	{
		i = rand() % 9 + 1;
		j = rand() % 9 + 1;
		if (a[i][j] == '0' && a[i][j] != '1')
		{
			a[i][j] = '1';
			n--;
		}
	}
}
void win(char a[ROWS][COLS], char b[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while (1)
	{
		printf("请输入你要走的位置：\n");
		scanf("%d%d", &i, &j);
		if (i >= 0 && i <= 9 && j >= 0 && j <= 9)
		{
			if (a[i][j] == '0')
			{
				b[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1] - '0' - '0' - '0' - '0' - '0' - '0' - '0';
				count++;
				show(b, ROW, COL);
				if (count == (81 - EASY))
				{
					printf("恭喜你，排雷成功。\n"); break;
				}
			}
			else
			{
				printf("很遗憾你被炸死了。\n");
				show(a, ROW, COL);
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入：\n");
		}
	}
}
void game()
{
	int i, j;
	char a[ROWS][COLS] = { 0 };
	char b[ROWS][COLS] = { 0 };
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			a[i][j] = '0';
		}
	}
	init(b, ROW, COL);
	show(b, ROW, COL);
	set(a, ROW, COL);
	win(a, b, ROWS, COLS);
}