#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do 
	{
		menu();
		printf("���������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);
	return 0;
}