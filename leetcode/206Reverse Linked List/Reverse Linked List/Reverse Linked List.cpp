#include"Reverse Linked List.h"

//*************自己解法*******************
ListNode* Solution::reverseList(ListNode* head)
{
	if (head == NULL)
		return NULL;
	ListNode *p, *p1, *p2;
	p1 = head;
	p2 = p1->next;
	p = p2->next;
	while (p2)
	{
		p2->next = p1;
		p1 = p2;
		p2 = p;
		if (p2)
		p = p2->next;
	}
	head->next = NULL;
	head = p1;
	return head;
}
//-----------------------------------------------

int main()
{
	Solution sol;

	ListNode *head, *p0, *p1, *p2, *p3, *p4, *p5, *p6;
	p0 = new ListNode(0);
	p1 = new ListNode(1);
	p2 = new ListNode(2);
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
	head = sol.reverseList(p0);
	while (head)
	{
		cout << head->val << '\t';
		head = head->next;
	}
	cout << endl;
	system("pause");
	return 0;
}