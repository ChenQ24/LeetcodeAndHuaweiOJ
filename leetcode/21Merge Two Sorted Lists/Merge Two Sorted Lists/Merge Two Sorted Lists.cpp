#include "Merge Two Sorted Lists.h"

//来自网络的解法

 ListNode *GetLists(int n)    //得到一个列表
 {
	     ListNode *l = new ListNode(0);
	     ListNode *pre = l;
	     int val;
	     for (int i = 0; i < n; i++) {
			 cout << "请输入第" << i+1 << "个有序链表元素的数据" << endl;
		         cin >> val;
		         ListNode *newNode = new ListNode(val);
		         pre->next = newNode;
		         pre = pre->next;
		
	}
	     return l->next;
	 }

 ListNode *Solution::mergeTwoLists(ListNode *l1, ListNode *l2)
 {
//	     assert(NULL != l1 && NULL != l2);
	     if (NULL == l1 && NULL == l2)
		         return NULL;
	     if (NULL == l1 && NULL != l2) // !!要记得处理一个为空，另一个不为空的情况
		         return l2;
	     if (NULL != l1 && NULL == l2)
		         return l1;
	
	     ListNode *temp = new ListNode(0);
	     temp->next = l1;
	     ListNode *pre = temp;
	
	     while (NULL != l1 && NULL != l2) {
		    if (l1->val > l2->val) { //从小到大排列
			   ListNode *next = l2->next;
			   l2->next = pre->next;
			   pre->next = l2;
			   l2 = next;
			
		    }
		    else {
			 l1 = l1->next;
			
		    }
		    pre = pre->next;
		
	     }
	     if (NULL != l2) {
		    pre->next = l2;
		
	     }
	     return temp->next;
}

 int main()
 {
	 Solution sol;
	 cout << "input the length of list1:" << endl;
	 int n1;
	 cin >> n1;
	 ListNode *l1;
	 l1 = GetLists(n1);
	 cout << "input the length of list2:" << endl;
	 int n2;
	 cin >> n2;
	 ListNode *l2;
	 l2 = GetLists(n2);
	 ListNode *l3;
	 l3 = sol.mergeTwoLists(l1, l2);
	 while (l3)
	 {
		 cout << l3->val << '\t';
		 l3 = l3->next;
	 }
	 cout << endl;
	 system("pause");
	 return 0;
 }