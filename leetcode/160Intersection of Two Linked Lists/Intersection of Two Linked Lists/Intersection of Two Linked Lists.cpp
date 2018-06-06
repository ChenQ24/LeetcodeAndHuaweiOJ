#include"Intersection of Two Linked Lists.h"

//*******************����ⷨ************************
//ע�⣺��Ҫ�Ƕ����������Ȳ�ͬ������Ĵ���
ListNode *Solution::getIntersectionNode(ListNode *headA, ListNode *headB) {
	if (headA == NULL || headB == NULL)
		return NULL;
	ListNode* iter1 = headA;
	ListNode* iter2 = headB;
	int len1 = 1;
	while (iter1->next != NULL)
	{
		iter1 = iter1->next;
		len1++;
	}
	int len2 = 1;
	while (iter2->next != NULL)
	{
		iter2 = iter2->next;
		len2++;
	}
	if (iter1 != iter2)//chen;��lter1��iter2ָֻ����һ���ڵ������ʱ����������while��ִ�У����ж����������ж��Ƿ���intersection    !!!!!��仰���ܶ�����������жϣ�����
		return NULL;
	if (len1 > len2)
	{
		for (int i = 0; i < len1 - len2; i++)
			headA = headA->next;
	}
	else if (len2 > len1)
	{
		for (int i = 0; i < len2 - len1; i++)
			headB = headB->next;
	}
	while (headA != headB)//���ʱ����ѭ����������A��B�޽��沿�֡���Ѱ�����Խ�β���������headA == headB=NULLʱ����ѭ����return headA��return NULL
	{
		headA = headA->next;
		headB = headB->next;
	}
	return headA;
}
//------------------------------------------------

int main()
{
	Solution sol;
	
	ListNode *head, *p0, *p1, *p2, *p3, *p4, *p5, *p6;
	p0 = new ListNode(10);
	p1 = new ListNode(1);
	p2 = new ListNode(2);
	p3 = new ListNode(3);
	p4 = new ListNode(4);
	p5 = new ListNode(5);
	p6 = new ListNode(6);
	p0->next = p1;
//	p1->next = p4;
	p2->next = p3;
	p3->next = p4;
	p4->next = p5;
	p5->next = p6;
	
	

	cout << ((sol.getIntersectionNode(p0, p2))==NULL? NULL:(sol.getIntersectionNode(p0, p2))->val )<< endl;
	system("pause");
	return 0;
}