#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
union a 
{
	int i;
	char c;
};
int main()
{
	union a a;
	a.i = 1;
	printf("%d\n", &(a.i));
	printf("%d\n", &(a.c));
	if (a.c == 1)
	{
		printf("С�˻�\n");
	}
	else
	{
		printf("��˻�\n");
	}
	a.i = 0x11223344;
	a.c = 0x55;
	printf("%x\n", a.i);
	return 0;
}