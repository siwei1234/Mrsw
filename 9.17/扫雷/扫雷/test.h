#pragma once
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY 10
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu();
void game();
void init(char a[ROWS][COLS], int row, int col);
void show(char a[ROWS][COLS], int row, int col);
void set(char a[ROWS][COLS], int row, int col);
void win(char a[ROWS][COLS], char b[ROWS][COLS], int rows, int cols);