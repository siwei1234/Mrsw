#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void f(int a)
{
	int i = 0;
	int m[32] = { 0 };
	int count = 0;
	while(a)
	{
		m[i++] = a % 2;
		a = a / 2;
		count++;
	}
	printf("��������\n");
    for (i = 0; i <= count; i += 2) 
	{
		printf("%d ", m[i]);
	}
    printf("\n");
    printf("ż������\n");
    for (i = 1; i <count; i += 2) 
    {
		printf("%d ", m[i]);
    }
	printf("\n");
}
int main()
{
	int a = 0;
	printf("���������֣�\n");
	scanf("%d", &a);
	f(a);
	return 0;
}