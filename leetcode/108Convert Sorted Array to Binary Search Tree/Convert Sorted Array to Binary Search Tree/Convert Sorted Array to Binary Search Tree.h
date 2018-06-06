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
	TreeNode* sortedArrayToBST(vector<int>& nums);
};