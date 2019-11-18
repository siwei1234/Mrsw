#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEA,
	MOD,
	SHOW,
	SORT,
	LOAD,
	SAVE
};
void menu()
{
	printf("*********** 1.add        2.del ***********\n");
	printf("*********** 3.search     4.modify ********\n");
	printf("*********** 5.show        6.sort *********\n");
	printf("***************** 0.exit *****************\n");
}
int main()
{
	int option = 0;
	Contact a;
	InitContact(&a);
	do
	{
		menu();
		printf("«Î ‰»Î—°‘Ò£∫\n");
		scanf("%d", &option);
		switch (option)
		{
		case EXIT:
			break;
		case ADD:
			AddContact(&a);
			break;
		case DEL:
			DelContact(&a);
			break;
		case SEA:
			SearchContact(&a);
			break;
		case MOD:
			ModifyContact(&a);
			break;
		case SHOW:
			ShowContact(&a);
			break;
		case SORT:
			SortContact(&a);
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ°£\n");
	/*	case LOAD:
			LoadData(&a);
			break;
		case SAVE:
			SaveData(&a);
			break;*/
		}
	} while (option);
	return 0;
}