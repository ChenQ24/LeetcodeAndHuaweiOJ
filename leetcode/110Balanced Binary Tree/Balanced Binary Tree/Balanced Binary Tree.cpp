#include"Balanced Binary Tree.h"

//*****************ÍøÂç½â·¨*********************
int height(TreeNode *root)
{
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		if (root->left == NULL)
		{
			return height(root->right) + 1;
		}
		else if (root->right == NULL)
		{
			return height(root->left) + 1;
		}
		else
		{
			int l = height(root->left);
			int r = height(root->right);

			return l<r ? (r + 1) : (l + 1);
		}
	}
}



bool Solution::isBalanced(TreeNode *root) {
	// Start typing your C/C++ solution below  
	// DO NOT write int main() function  
	if (root == NULL)
	{
		return true;
	}
	else
	{
		int l = height(root->left);
		int r = height(root->right);

		if (l - r >= -1 && l - r <= 1)
		{
			return isBalanced(root->left) && isBalanced(root->right);
		}
		else
			return false;
	}
}
//---------------------------------------------------

int main()
{
	Solution sol;
	TreeNode *node, *node1, *node2, *node3, *node4, *node5, *node6;
	TreeNode *root;
	node = new TreeNode(1);
	root = node;
	node1 = new TreeNode(3);
	node->left = node1;
	node2 = new TreeNode(4);
	node->right = node2;
	node3 = new TreeNode(6);
	node->left->left = node3;
	node4 = new TreeNode(8);
	node->left->right = node4;
	node5 = new TreeNode(9);
	node->left->left->left = node5;
	node6 = new TreeNode(110);
	node->right->right = node6;
	cout << sol.isBalanced(root) <<endl;
	system("pause");
	return 0;
}