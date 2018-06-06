#include"Remove Duplicates from Sorted List.h"


ListNode* Solution::deleteDuplicates(ListNode* head) {
	if (head == NULL) {
		return NULL;
	}

	ListNode *node = head;
	while (node->next != NULL) {
		if (node->val == node->next->val) {
			node->next = node->next->next;
		}
		else {
			node = node->next;
		}
	}
	return head;
}

int main()
{
	Solution sol;
	ListNode*head;
	ListNode*l=new ListNode(0);
	ListNode*pre = l;
	int val,n;
	cout<< "������������n"<<endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "�������" << i+1 << "��Ԫ��" << endl;
		cin >> val;
		ListNode*newnode = new ListNode(val);
		pre->next = newnode;
		pre = pre->next;
	}
	head = l->next;
	head=sol.deleteDuplicates(head);
	while (head)
	{
		cout << head->val << '\t';
		head = head->next;
	}
	system("pause");
	return 0;	


}