#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int LTDataType;
typedef struct ListNode
{
	int data;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;
// ��������������ͷ���.
ListNode* ListCreate();
// ˫����������
void ListDestory(ListNode* plist);
// ˫��������ӡ
void ListPrint(ListNode* plist);
// ˫������β��
void ListPushBack(ListNode* plist, LTDataType x);
// ˫������βɾ
void ListPopBack(ListNode* plist);
// ˫������ͷ��
void ListPushFront(ListNode* plist, LTDataType x);
// ˫������ͷɾ
void ListPopFront(ListNode* plist);
// ˫����������
ListNode* ListFind(ListNode* plist, LTDataType x);
// ˫��������pos��ǰ����в���
void ListInsert(ListNode* pos, LTDataType x);
// ˫������ɾ��posλ�õĽڵ�
void ListErase(ListNode* pos);
ListNode* check(LTDataType x);