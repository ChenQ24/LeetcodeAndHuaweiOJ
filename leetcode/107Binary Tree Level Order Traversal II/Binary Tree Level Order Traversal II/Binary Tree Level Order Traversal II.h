#include<iostream>
#include<vector>
using namespace std;



// Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	vector<vector<int> > result;
	void levelTra(TreeNode *root, int level);
	vector<vector<int>> levelOrderBottom(TreeNode* root);
};