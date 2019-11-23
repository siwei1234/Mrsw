#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1000;
	FILE* p = fopen("test.txt", "w");
	fwrite(&a, 4, 1, p);
	fclose(p);
	return 0;
}