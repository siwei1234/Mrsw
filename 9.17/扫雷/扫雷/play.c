#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do 
	{
		menu();
		printf("请输入你的选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择：\n");
		}
	} while (input);
	return 0;
}