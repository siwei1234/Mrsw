#include<stdio.h>
#include<malloc.h>
struct ListNode {
	int val;
	struct ListNode *next;
};

typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	if (l1 == NULL && l2 == NULL)
		return NULL;
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	ListNode* cur = head;
	while (l1 && l2)
	{
		if ((l1->val) < (l2->val))
		{
			cur->next = l1;
			cur = cur->next;
			l1 = l1->next;
		}
		else
		{
			cur->next = l2;
			cur = cur->next;
			l2 = l2->next;
		}
	}
	if (l1 != NULL)
	{
		cur->next = l1;
	}
	if (l2 != NULL)
	{
		cur->next = l2;
	}
	return head->next;
}
int main()
{
	return 0;
}