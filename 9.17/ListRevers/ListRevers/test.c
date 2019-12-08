#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
typedef struct List
{
	int data;
	struct List* next;
}List;
void Print(List* plist)
{
	while (plist)
	{
		printf("%d->", plist->data);
		plist = plist->next;
	}
	printf("NULL\n");
}
void add(List** pplist, int data)
{
	List* new = (List*)malloc(sizeof(List));
	new->data = data;
	new->next = *pplist;
	*pplist = new;
}
List* ListR(List* head)
{
	List* tail = head;
	List* prev = head;
	List* next = NULL;
	while (tail)
	{
		if (tail == head)
		{
			next = tail->next;
			prev->next = NULL;
			tail = next;
		}
		else
		{
			next = tail->next;
			tail->next = prev;
			prev = tail;
			tail = next;
		}
	}
	return prev;
}
int main()
{
	List* plist = NULL;
	add(&plist, 4);
	add(&plist, 3);
	add(&plist, 2);
	add(&plist, 1);
	Print(plist);
	plist = ListR(plist);
	Print(plist);
	return 0;
}