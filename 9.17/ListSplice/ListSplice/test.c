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
List* Splice(List* head1, List* head2)
{
	List* des = NULL;
	List* head = NULL;
	if (head1 == NULL)
	{
		return head2;
	}
	if (head2 == NULL)
	{
		return head1;
	}
	while (head1 && head2)
	{
		if (head1->data <= head2->data)
		{
			if (des == NULL)
			{
				head = des = head1;
			}
			else
			{
				head->next = head1;
				head = head1;
			}
			head1 = head1->next;
		}
		else
		{
			if (des == NULL)
			{
				head = des = head2;
			}
			else
			{
				head->next = head2;
				head = head2;
			}
			head2 = head2->next;
		}
	}
	while (head1)
	{
		head->next = head1;
		head1 = head1->next;
	}
	while (head2)
	{
		head->next = head2;
		head2 = head2->next;
	}
	return des;
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
int main()
{
	List* plist1 = NULL;
	List* plist2 = NULL;
	add(&plist1, 4);
	add(&plist1, 3);
	add(&plist1, 2);
	add(&plist1, 1);
	add(&plist1, 0);
	add(&plist2, 4);
	add(&plist2, 3);
	add(&plist2, 2);
	add(&plist2, 1);
	add(&plist2, 0);
	Print(plist1);
	List* ret = Splice(plist1, plist2);
	Print(ret);
	return 0;
}