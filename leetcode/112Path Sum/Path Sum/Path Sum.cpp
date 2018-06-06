#include"Path Sum.h"



//***************ÍøÂç½â·¨**************
bool dfs(TreeNode *node, int sum, int curSum)
     {
	         if (node == NULL)
		             return false;
	
		     if (node->left == NULL && node->right == NULL)
		             return curSum + node->val == sum;
	
		     return dfs(node->left, sum, curSum + node->val) || dfs(node->right, sum, curSum + node->val);
	     }

bool Solution::hasPathSum(TreeNode* root, int sum)
{
	return dfs(root, sum, 0);
}
//--------------------------------------


int main()
{
	Solution sol;
	TreeNode *node, *node1, *node2, *node3, *node4, *node5, *node6,*node7,*node8;
	TreeNode *root;
	node = new TreeNode(5);
	root = node;
	node1 = new TreeNode(4);
	node->left = node1;
	node2 = new TreeNode(8);
	node->right = node2;
	node3 = new TreeNode(11);
	node->left->left = node3;
	node4 = new TreeNode(13);
	node->right->left = node4;
	node5 = new TreeNode(4);
	node->right->right = node5;
	node6 = new TreeNode(7);
	node->left->left->left = node6;
	node7 = new TreeNode(2);
	node->left->left->right = node7;
	node8 = new TreeNode(1);
	node->right->right->right = node8;
	cout << sol.hasPathSum(root,10) << endl;
	system("pause");
	return 0;
}