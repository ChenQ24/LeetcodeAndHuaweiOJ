#include<iostream>
#include<cassert>
using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}

};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};