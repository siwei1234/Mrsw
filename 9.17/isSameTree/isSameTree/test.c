#include<stdio.h>
#include<malloc.h>
struct TreeNode {  
	int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
int isSameTree(struct TreeNode* p, struct TreeNode* q) {
	if (p == NULL && q == NULL)
		return 1;
	if (p == NULL || q == NULL)
		return 0;
	if (p->val == q->val)
		return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	return 0;
}
int main()
{
	return 0;
}