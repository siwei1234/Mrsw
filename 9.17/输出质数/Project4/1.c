#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
		for (i = 100; i <= 200; i++)
			for(j=2;j<=i/2;j++)
		{
				if (i%j == 0)break;
				
				else{
					if(j == i / 2)
					printf("%d\t", i);
				}

		}
		getchar();
	return 0;
}