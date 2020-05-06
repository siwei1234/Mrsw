#include<stdio.h>
#include<malloc.h>
#include<string.h>
struct ListNode {
	int val;
	struct ListNode *next;
};
int* reversePrint(struct ListNode* head, int* returnSize) {
	int numSize = 0;
	struct ListNode* cur = head;
	while (cur != NULL)
	{
		numSize += 1;
		cur = cur->next;
	}
	int* ret = (int*)malloc(sizeof(int) * (numSize));
	*returnSize = numSize;
	cur = head;
	int i = 0;
	while (cur != NULL)
	{
		ret[i++] = cur->val;
		cur = cur->next;
	}
	for (int i = 0; i < numSize / 2; i++)
	{
		int tmp = ret[i];
		ret[i] = ret[numSize - i - 1];
		ret[numSize - i - 1] = tmp;
	}
	return ret;
}
int main()
{
	return 0;
}