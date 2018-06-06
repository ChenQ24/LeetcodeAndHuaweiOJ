#include"Minimum Depth of Binary Tree.h"

//****************ÍøÂç½â·¨************************
int Solution::minDepth(TreeNode* root)
{
	if (root == NULL) return 0;
	int lmin = minDepth(root->left);
	int rmin = minDepth(root->right);
	if (lmin == 0 && rmin == 0)
		return 1;
	if (lmin == 0)
		lmin = INT_MAX;
	if (rmin == 0)
		rmin = INT_MAX;
	return min(lmin, rmin) + 1;
}
//---------------------------------------------

int main()
{
	Solution sol;
	TreeNode *node, *node1, *node2, *node3, *node4, *node5, *node6;
	TreeNode *root;
	node = new TreeNode(1);
	root = node;
	node1 = new TreeNode(3);
	node->left = node1;
	node2 = new TreeNode(3);
	node->right = node2;
	node3 = new TreeNode(6);
	node->left->left = node3;
	node4 = new TreeNode(8);
	node->left->left->right = node4;
	node5 = new TreeNode(8);
	node->right->right = node5;
	node6 = new TreeNode(6);
	node->right->right->left = node6;
	cout << sol.minDepth(root) << endl;
	system("pause");
	return 0;
}