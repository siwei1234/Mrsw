#include<stdio.h>
struct TreeNode {
	int val;
	struct TreeNode *left;
    struct TreeNode *right;
}; 
bool compare(struct TreeNode* l, struct TreeNode* r)
{
	if (l == NULL && r == NULL)
		return true;
	if (l == NULL || r == NULL)
		return false;
	if (l->val == r->val)
		return compare(l->right, r->left) && compare(l->left, r->right);
	return false;
}
bool isSymmetric(struct TreeNode* root) {
	if (root == NULL)
		return true;
	return compare(root->left, root->right);
}
int main()
{
	return 0;
}