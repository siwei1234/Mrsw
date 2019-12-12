#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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
int ListH(List* head)
{
	List* new = NULL;
	if (head == NULL)
	{
		return 1;
	}
	List* tail = head;
	while (tail)
	{
		add(&new, tail->data);
		tail = tail->next;
	}
	tail = head;
	while (tail)
	{
		if (tail->data != new->data)
		{
			return 0;
		}
		tail = tail->next;
		new = new->next;
	}
	return 1;
}
int main()
{
	List* plist = NULL;
	add(&plist, 3);
	add(&plist, 2);
	add(&plist, 1);
	add(&plist, 1);
	add(&plist, 2);
	add(&plist, 3);
	Print(plist);
	int ret = ListH(plist);
	printf("%d", ret);
	return 0;
}