#include "BClist.h"
int main()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 1);
	SListPushFront(&plist, 6);
	SListPushFront(&plist, 6);
	SListPopBack(&plist);
	SListPopFront(&plist);
	SListNode* ret = SListFind(plist, 1);
	printf("%d\n", ret->data);
	SListInsertAfter(plist->next, 4);
	SListEraseAfter(plist);
	SListPrint(plist);
	SListDestory(plist);
	return 0;
}