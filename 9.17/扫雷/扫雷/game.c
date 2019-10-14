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
void game()
{
	int i, j;
	char a[ROWS][COLS] = { 0 };
	char b[ROWS][COLS] = { 0 };
	for (i = 1; i <= ROW; i++)
	{
		for (j = 1; j <= COL; j++)
		{
			a[i][j] = '0';
		}
	}
	init(b, ROW, COL);
	show(b, ROW, COL);
	set(a, ROW, COL);
	win(a, b, ROW, COL);
	show(a, ROW, COL);
}