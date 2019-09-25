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
		printf("请输入你要猜的数字：\n");
		scanf("%d", &b);
		if (c < b)
		{
			printf("猜大了\n");
		}
		else if (c > b)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("按1开始游戏，按0退出游戏。\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:game(); break;
		case 0:break;
		default:
			printf("请重新输入:\n"); break;
		}
	} while (a);
	return 0;
}