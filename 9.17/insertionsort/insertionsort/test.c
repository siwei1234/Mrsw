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
List* sort(List* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	List* sortHead = (List*)malloc(sizeof(List));
	sortHead->next = head;
	head = head->next;
	sortHead->next->next = NULL;
	while (head)
	{
		List* next = head->next;
		List* prev = sortHead;
		List* cur = sortHead->next;
		while (cur)
		{
			if (cur->data > head->data)
			{
				prev->next = head;
				head->next = cur;
				break;
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		}
		if (cur == NULL)
		{
			prev->next = head;
			head->next = NULL;
		}
		head = next;
	}
	return sortHead->next;
}
int main()
{
	List* a = NULL;
	add(&a, 1);
	add(&a, 5);
	add(&a, 3);
	add(&a, 2);
	add(&a, 4);
	Print(a);
	List* ret = sort(a);
	Print(ret);
}