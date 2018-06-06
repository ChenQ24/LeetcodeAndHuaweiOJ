#include"Merge Sorted Array.h"

/**
* @param nums1: sorted integer array nums1 which has m elements,
*           but size of nums1 is m+n
* @param nums2: sorted integer array nums2 which has n elements
* @return: void
*/

//************网络解法******************
void Solution::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int i = m - 1, j = n - 1, index = m + n - 1;
	while (i >= 0 && j >= 0) {
		if (nums1[i] > nums2[j]) {
			nums1[index--] = nums1[i--];
		}
		else {
			nums1[index--] = nums2[j--];
		}
	}
	while (i >= 0) {
		nums1[index--] = nums1[i--];
	}
	while (j >= 0) {
		nums1[index--] = nums2[j--];
	}
}
//-----------------------------------------

int main()
{
	Solution sol;
	vector<int> a{ 1, 3, 4, 10, 13 };

	cout << a.capacity()<<endl;
	a.resize(15);//注意：如果不用resize使下标5~9的空间赋予初值，会出现下标越界（即用reserve会下标越界，因为reserve只分配空间未初始化，代表a只有五个元素即0~4，造成函数调用时下标越界）
//	a.reserve(10);
	cout << a.capacity() << endl;
//	a.push_back(1), a.push_back(3), a.push_back(4), a.push_back(10), a.push_back(13);
	vector<int> b{ 2, 3, 8, 9, 15 };
	
	sol.merge(a, 5, b, 5);
	for (int &mt : a)
		cout << mt << '\t';
	cout<<endl;
	system("pause");
	return 0;
}