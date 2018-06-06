#include"Maximum Depth of Binary Tree.h"


//**************网络解法*******************


//采用DFS的思想
int Solution::maxDepth(TreeNode *root)
{
	if (NULL == root)
		return 0;
	int l = maxDepth(root->left);//chen注意：与求最短深度不同的是无判断单支情况：if(root->left==NULL) return maxDepth(root->right);因root->left==NULL时，左支深度必小于右支深度，包含于return l > r ? l + 1 : r + 1;
	int r = maxDepth(root->right);

	return l > r ? l + 1 : r + 1;
	//以上这两种方式有一种更简便的方法
	//return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

/*
//采用BFS的方法，引入队列
int maxDepth(TreeNode *root)
{
	if (NULL == root)
		return 0;
	queue <TreeNode *> que;
	int nCount = 1;
	int nDepth = 0;// 记录队列里面每一层上的元素

	que.push(root);
	while (!que.empty()) {
		TreeNode *pTemp = que.front();
		que.pop();
		nCount--;

		if (pTemp->left)
			que.push(pTemp->left);
		if (pTemp->right)
			que.push(pTemp->right);

		if (nCount == 0) {
			nDepth++;
			nCount = que.size();
		}
	}
	return nDepth;
}
//---------------------------------------------

*/

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
	node->left->right = node4;
	node5 = new TreeNode(8);
	node->left->left->left = node5;
	node6 = new TreeNode(6);
	node->left->left->left->left = node6;
	cout << sol.maxDepth(root) << endl;
	system("pause");
	return 0;

}