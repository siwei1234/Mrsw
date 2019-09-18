#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3] = { 0 };
	int i,j,t;
	printf("请输入三个数：\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<2;i++)
		for (j = i + 1; j < 3; j++)
		{
			if (a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}

	for (i = 0; i < 3; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}