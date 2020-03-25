#include<stdio.h>
#include<malloc.h>
struct ListNode {
	int val;
	struct ListNode *next;
 };
 

struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur)
	{
		struct ListNode* next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}
int main()
{
	return 0;
}