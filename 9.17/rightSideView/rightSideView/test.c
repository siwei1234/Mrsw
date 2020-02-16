#include<stdio.h>
#include<malloc.h>
typedef struct TreeNode {
    int val;
    struct TreeNode *left;
	struct TreeNode *right;
}Node;
Node* newnode(int data)
{
	Node* new = (Node*)malloc(sizeof(Node));
	new->val = data;
	new->left = NULL;
	new->right = NULL;
	return new;
}
void insert(Node* root, int data)
{
	Node* new = newnode(data);
	if (root == NULL)
		root = new;
	else
	{
		while (root->right != NULL)
		{
			root = root->right;
		}
		root->right = new;
	}
}
void dfs(struct TreeNode* root, int* returnSize, int* res, int level, int* monitor) {
	if (root == NULL) {
		return;
	}
	if (level > *monitor) {
		*monitor = level;
		res[(*returnSize)++] = root->val;
	}
	dfs(root->right, returnSize, res, level + 1, monitor);
	dfs(root->left, returnSize, res, level + 1, monitor);
	return;
}

int* rightSideView(struct TreeNode* root, int* returnSize) {
	int *res = (int *)malloc(sizeof(int) * 100);
	*returnSize = 0;
	int monitor = 0;
	dfs(root, returnSize, res, 1, &monitor);
	return res;
}
int main()
{
	int ret;
	Node root = { 1,NULL,NULL };
	insert(&root, 1);
	insert(&root, 2);
	insert(&root, 3);
	printf("%d", rightSideView(&root, &ret));
}