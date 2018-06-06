#include"Remove Linked List Elements.h"

/*
//**************自己解法*******************
ListNode* Solution::removeElements(ListNode* head, int val)
{
	ListNode* p=head;
	if (NULL == head)
		return NULL;
	if (head->val == val)
		head = head->next;
	while (p->next != NULL)
	{
		if (p->next->val == val)
		{
			p->next = p->next->next;
		}
		else
			p = p->next;
	}
	return head;
}
//-------------------------------
*/

//**************leetcode官网(！！！！未读懂)***************
 ListNode* Solution::removeElements(ListNode *head, int val) {
	if (head == NULL) return NULL;
	head->next = removeElements(head->next, val);
	return head->val == val ? head->next : head;
}
//-------------------------------------

int main()
{
	Solution sol;

	ListNode *head, *p0, *p1, *p2, *p3, *p4, *p5, *p6;
	p0 = new ListNode(1);
	p1 = new ListNode(2);
	p2 = new ListNode(6);
	p3 = new ListNode(3);
	p4 = new ListNode(4);
	p5 = new ListNode(5);
	p6 = new ListNode(6);
	p0->next = p1;
	p1->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = p6;
	head = sol.removeElements(p0, 6);
	while (head)
	{
		cout << head->val << '\t';
		head = head->next;
	}
	cout << endl;
	system("pause");
	return 0;
}