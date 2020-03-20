//¶ş²æÊ÷ºóĞò±éÀú
#include<stdio.h>
#include<malloc.h>
struct TreeNode {
	int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };
int sum(struct TreeNode* root)
{
	if (root == NULL)
		return 0;
	return 1 + sum(root->left) + sum(root->right);
}
void Traversal(struct TreeNode* root, int* a, int* i)
{
	if (root == NULL)
		return;
	Traversal(root->left, a, i);
	Traversal(root->right, a, i);
	a[(*i)++] = root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
	int size = sum(root);
	int* ret = (int*)malloc(sizeof(int) * size);
	*returnSize = size;
	int i = 0;
	Traversal(root, ret, &i);
	return ret;
}
int main()
{
	return 0;
}