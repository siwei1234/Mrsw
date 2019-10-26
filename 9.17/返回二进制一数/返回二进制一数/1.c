#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i;
	printf("«Î ‰»Î ˝◊÷£∫\n");
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)
		{
			n++;
		}
	}
	printf("%d", n);
	return 0;
}