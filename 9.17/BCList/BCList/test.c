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
	ListPrint(plist);
	ListDestory(plist);
}