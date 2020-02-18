#include "BClist.h"
// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	node->data = x;
	node->next = NULL;
	return node;
}
// 单链表打印
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
// 单链表尾插
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
// 单链表的头插
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
// 单链表的尾删
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
// 单链表头删
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
// 单链表查找
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
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	SListNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
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
// 单链表的销毁
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