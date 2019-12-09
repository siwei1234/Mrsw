#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
typedef struct List
{
	int data;
	struct List* next;
}List;
void add(List** pplist, int x)
{
	List* new = (List*)malloc(sizeof(List*));
	new->data = x;
	new->next = *pplist;
	*pplist = new;
}
void Print(List* head)
{
	while (head)
	{
		printf("%d->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
List find(List* head, int k)
{
	List* tail = head;
	List* prev = head;
	while (k--)
	{
		tail = tail->next;
	}
	while (tail)
	{
		tail = tail->next;
		prev = prev->next;
	}
	return *prev;
}
int main()
{
	List* plist = NULL;
	add(&plist, 4);
	add(&plist, 3);
	add(&plist, 2);
	add(&plist, 1);
	add(&plist, 0);
	Print(plist);
	List ret = find(plist, 2);
	printf("%d", ret.data);
}