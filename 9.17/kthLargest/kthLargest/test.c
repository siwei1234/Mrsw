#include<stdio.h>
#include<malloc.h>
struct TreeNode {
	int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Adjustdown(int* a, int n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			++child;
		}
		if (a[parent] > a[child])
		{
			swap(&a[parent], &a[child]);
			parent = child;
			child = child * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void find(struct TreeNode* root, int* a, int k)
{
	if (root == NULL)
		return;
	if (root->val > a[0])
	{
		a[0] = root->val;
		Adjustdown(a, k, 0);
	}
	find(root->left, a, k);
	find(root->right, a, k);

}
int kthLargest(struct TreeNode* root, int k) {
	int* ret = (int*)malloc(sizeof(int)*k);
	memset(ret, 0, k);
	find(root, ret, k);
	return ret[0];
}
int main()
{
	return 0;
}