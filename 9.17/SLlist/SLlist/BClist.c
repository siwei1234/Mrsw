#include "BClist.h"
// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	node->data = x;
	node->next = NULL;
	return node;
}
// �������ӡ
void SListPrint(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
// ������β��
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
		*pplist = newnode;
	else
	{
		SListNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
		*pplist = newnode;
	else
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}
}
// �������βɾ
void SListPopBack(SListNode** pplist)
{
	SListNode* cur = *pplist;
	SListNode* prev = NULL;
	if (cur == NULL || cur->next == NULL)
	{
		free(cur);
		*pplist = NULL;
	}
	else
	{
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		cur = NULL;
		prev->next = NULL;
	}
}
// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	SListNode* cur = *pplist;
	if (cur == NULL)
	{
		return;
	}
	else if (cur->next == NULL)
	{
		free(cur);
		*pplist = NULL;
	}
	else
	{
		SListNode* next = cur->next;
		free(cur);
		*pplist = next;
	}
}
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	SListNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	SListNode* next = pos->next;
	if (next != NULL)
	{
		SListNode* nnext = next->next;
		free(next);
		next = NULL;
		pos->next = nnext;
	}
}
// �����������
void SListDestory(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
}