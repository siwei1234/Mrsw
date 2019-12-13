#define _CRT_SECURE_NO_WARNINGS 1
#include "list.h"

// �������������ͷ���.
ListNode* ListCreate()
{
	ListNode* new = (ListNode*)malloc(sizeof(ListNode));
	new->prev = new;
	new->next = new;
	return new;
}
// ˫����������
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
// ˫�������ӡ
void ListPrint(ListNode* plist)
{
	ListNode* head = plist;
	plist = plist->next;
	while (plist != head)
	{
		printf("%d", plist->data);
		plist = plist->next;
	}
}
ListNode* check(LTDataType x)
{
	ListNode* new = (ListNode*)malloc(sizeof(ListNode));
	new->data = x;
	new->next = NULL;
	new->prev = NULL;
	return new;
}
// ˫������β��
void ListPushBack(ListNode* plist, LTDataType x)
{
	ListNode* new = check(x);
	new->prev = plist->prev;
	plist->prev->next = new;
	new->next = plist;
	plist->prev = new;


}
// ˫������βɾ
void ListPopBack(ListNode* plist);
// ˫������ͷ��
void ListPushFront(ListNode* plist, LTDataType x);
// ˫������ͷɾ
void ListPopFront(ListNode* plist);
// ˫���������
ListNode* ListFind(ListNode* plist, LTDataType x);
// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);
// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);