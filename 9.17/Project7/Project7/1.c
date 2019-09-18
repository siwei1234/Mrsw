#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { 0 };
	int i, t;
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &a[i]);
		}
		t = a[0];
	for (i = 1; i < 10; i++)
	{
		if (a[i] > t)
		{
			t = a[i];
		}
	}
	printf("%d", t);
	system ("pause");
	return 0;
}