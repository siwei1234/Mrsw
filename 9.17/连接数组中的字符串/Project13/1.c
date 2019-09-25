
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fun(char a[3][20], char *b)
{
	int i, j, k = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; a[i][j] != '\0'; j++)
		{
			b[k] = a[i][j];
			k++;
		}
b[k] = '\0';
}
int main()
{
	char n[100] = { "###########" };
	char m[3][20] = { "AAAA","BB","V" };
	fun(m, n);
	printf("%s", n);
	system("pause");
	return 0;
}
