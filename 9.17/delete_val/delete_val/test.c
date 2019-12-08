#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
typedef struct List
{
	int data;
	struct List* next;
}List;
void PushFront(List** pplist, int x)
{
	List* newNode = (List*)malloc(sizeof(newNode));
	newNode->data = x;
	newNode->next = *pplist;
	*pplist = newNode;

}
List* removes(List* head, int val)
{
	List* tail = head;
	List* prev = NULL;
	while (tail != NULL)
	{
		if (tail->data == val)
		{
			if (tail == head)
			{
				head = tail->next;
			}
			else
			{
				prev->next = tail->next;
			}
			tail = tail->next;
		}
		else
		{
			prev = tail;
			tail = tail->next;
		}

	}
	return head;
}
int main()
{
	List* plist = NULL;
	PushFront(&plist, 1);
	PushFront(&plist, 2);
	PushFront(&plist, 2);
	PushFront(&plist, 2);
	PushFront(&plist, 3);
	PushFront(&plist, 2);
	plist = removes(plist, 2);
	while (plist != NULL)
	{
		printf("%d", plist->data);
		plist = plist->next;
	}
}