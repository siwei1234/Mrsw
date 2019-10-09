#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu();
void game();
void player(char b[ROW][COL], int row, int col);
void computer(char b[ROW][COL], int row, int col);
void remake(char b[ROW][COL],int row,int col);
char win(char b[ROW][COL], int row, int col);