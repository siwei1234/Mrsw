#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	    printf("******************\n");
		printf("****  1.paly  ****\n");
		printf("****  0.exit  ****\n");
		printf("******************\n");
}
void game()
{
	int b, c;
	c = rand() % 100 + 1;
    while(1)
	{
		printf("��������Ҫ�µ����֣�\n");
		scanf("%d", &b);
		if (c < b)
		{
			printf("�´���\n");
		}
		else if (c > b)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int a = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��1��ʼ��Ϸ����0�˳���Ϸ��\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:game(); break;
		case 0:break;
		default:
			printf("����������:\n"); break;
		}
	} while (a);
	return 0;
}