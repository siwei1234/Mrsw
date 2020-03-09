#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

// 创建返回链表的头结点.
ListNode* ListCreate()
{
	ListNode* new = (ListNode*)malloc(sizeof(ListNode));
	new->prev = new;
	new->next = new;
	return new;
}
// 双向链表销毁
void ListDestory(ListNode* plist)
{
	ListNode* head = plist;
	ListNode* next = plist->next;
	ListNode* prev = head;
	while (plist != head)
	{
		prev->next = plist->next;
		next->prev = plist->prev;
		free(plist);
		plist = NULL;
		plist = next;
		next = next->next;
	}
	plist = NULL;
}
// 双向链表打印
void ListPrint(ListNode* plist)
{
	ListNode* head = plist;
	plist = plist->next;
	while (plist != head)
	{
		printf("%d->", plist->data);
		plist = plist->next;
	}
	printf("NULL");
}
ListNode* check(LTDataType x)
{
	ListNode* new = (ListNode*)malloc(sizeof(ListNode));
	new->data = x;
	new->next = NULL;
	new->prev = NULL;
	return new;
}
// 双向链表尾插
void ListPushBack(ListNode* plist, LTDataType x)
{
	ListNode* new = check(x);
	new->prev = plist->prev;
	plist->prev->next = new;
	new->next = plist;
	plist->prev = new;


}
// 双向链表尾删
void ListPopBack(ListNode* plist)
{
	ListNode* prev = plist->prev;
	plist->prev = prev->prev;
	prev->prev->next = plist;
	free(prev);
}
// 双向链表头插
void ListPushFront(ListNode* plist, LTDataType x)
{
	ListNode* new = check(x);
	ListNode* next = plist->next;
	plist->next = new;
	new->prev = plist;
	new->next = next;
	next->prev = new;
}
// 双向链表头删
void ListPopFront(ListNode* plist)
{
	ListNode* next = plist->next;
	plist->next = next->next;
	next->next->prev = plist;
	free(next);
}
// 双向链表查找
ListNode* ListFind(ListNode* plist, LTDataType x)
{
	ListNode* head = plist;
	plist = plist->next;
	while (plist != head)
	{
		if (plist->data == x)
		{
			return plist;
		}
		plist = plist->next;
	}
	return NULL;
}
// 双向链表在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode* new = check(x);
	ListNode* next = pos->next;
	pos->next = new;
	new->prev = pos;
	new->next = next;
	next->prev = new;
}
// 双向链表删除pos位置的节点
void ListErase(ListNode* pos)
{
	ListNode* prev = pos->prev;
	pos->prev = prev->prev;
	prev->prev->next = pos;
	free(prev);
}