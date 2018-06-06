#include"Linked List Cycle.h"

//**************自己解法******************
bool Solution::hasCycle(ListNode *head)
{
	ListNode *p1;
	ListNode *p2;
	if (head == NULL)
		return false;
	p1 = head;
	p2 = head->next;
	while (p1 != p2)
	{
		if (p1 == NULL)
			break;
		else
			p1 = p1->next;
		if (p2 == NULL)
			break;
		else
			p2 = p2->next;
		if (p2 == NULL)
			break;
		else
			p2 = p2->next;

	}
	if (p1 == p2&&(p2!=NULL))
		return true;
	else
		return false;

}
//------------------------------------

/*
//******************leetcode 官网***************
bool Solution::hasCycle(ListNode *head)
    if(head==NULL) return false;
    ListNode *walker = head;
    ListNode *runner = head;
    while(runner->next!=NULL&& runner->next->next!=NULL) {
        walker = walker->next;
        runner = runner->next->next;
        if(walker==runner) return true;
    }
    return false;
}
//--------------------------------------------------------
*/

int main()
{
	Solution sol;
	ListNode *head,*p0,*p1,*p2,*p3,*p4,*p5,*p6;
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
//	p5->next = p6;
//	p6->next = p4;
	cout << sol.hasCycle(p0) << endl;
	system("pause");
	return 0;



}