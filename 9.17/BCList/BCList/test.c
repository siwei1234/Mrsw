#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"
int main()
{
	ListNode* plist = NULL;
	plist = ListCreate();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPopBack(plist);
	ListPushFront(plist, 0);
	ListPopFront(plist);
	ListInsert(plist, 0);
	ListErase(plist);
	ListPrint(plist);
	ListDestory(plist);
}