#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
typedef struct List
{
	int data;
	struct List* next;
}List;
void add(List** pplist, int data)
{
	List* new = (List*)malloc(sizeof(List));
	new->data = data;
	new->next = *pplist;
	*pplist = new;
}
void Print(List* plist)
{
	while (plist)
	{
		printf("%d->", plist->data);
		plist = plist->next;
	}
	printf("NULL\n");
}
List* ListD(List* head, int x)
{
	List* less = NULL;
	List* more = NULL;
	List* prev = NULL;
	List* pre = NULL;
	while (head)
	{
		if (head->data <= x)
		{
			if (less == NULL)
			{
				pre = less = head;
			}
			else
			{
				less->next = head;
				less = head;
			}
		}
		else
		{
			if (more == NULL)
			{
				prev = more = head;
			}
			else
			{
				more->next = head;
				more = head;
			}
		}
		head = head->next;
	}
	less->next = prev;
	return pre;
}
int main()
{
	List* plist = NULL;
	add(&plist, 7);
	add(&plist, 3);
	add(&plist, 2);
	add(&plist, 9);
	add(&plist, 4);
	add(&plist, 1);
	Print(plist);
	List* ret = ListD(plist, 4);
	Print(ret);
}