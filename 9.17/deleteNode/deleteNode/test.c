#include<stdio.h>
#include<malloc.h>
struct ListNode {
	int val;
    struct ListNode *next;
};
 
void deleteNode(struct ListNode* node) {
	struct ListNode* next = node->next;
	if (next == NULL)
		return;
	node->val = next->val;
	node->next = next->next;
	free(next);
}

int main()
{
	return 0;
}