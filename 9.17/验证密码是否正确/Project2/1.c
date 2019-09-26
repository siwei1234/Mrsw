#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char b[10] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:\n");
		scanf("%s", &b);
		if (strcmp(b, "siweizxcv") == 0)
		{
			printf("ÃÜÂëÕýÈ·\n"); break;
		}
	}
	if (i == 3)
	{
		printf("ÃÜÂë´íÎóÈý´Î\n");
	}
	return 0;
}