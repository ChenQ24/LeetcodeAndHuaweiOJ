#include"Intersection of Two Linked Lists.h"

//*******************网络解法************************
//注意：主要是对两个链表长度不同的情况的处理
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
	if (iter1 != iter2)//chen;当lter1、iter2只指向有一个节点的链表时，上面两个while不执行，此判断语句可用于判断是否有intersection    !!!!!这句话不能丢，特殊情况判断！！！
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
	while (headA != headB)//相等时跳出循环，包含了A、B无交叉部分、搜寻到各自结尾情况，假设headA == headB=NULL时跳出循环，return headA会return NULL
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