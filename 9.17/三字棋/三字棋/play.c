#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
int main()
{
	int a = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (a);
		return 0;
}