#include"Remove Element.h"


//****************����ⷨ***************
int Solution::removeElement(vector<int>& nums, int val) {
	int ex = -1;//exΪ��ֵ��ʾû�е���val�ģ���Զ��ִ��else if����䣨����Զ����ǰ���ƣ���һ���е���val�ģ�ex����ֵΪ�±꣬�±�ز�Ϊ�������ִ��else if�е���䣨������ǰ���ƣ�
	int n = nums.size();
	int len = n;
	for (int i = 0; i < n; i++) {
		if (nums[i] == val) {
			len--;
			if (ex < 0)
				ex = i;
		}
		else if (ex >= 0) {			//��ʾ�е���val��ֵ��Ҫ�������е���val�ĺ������������ǰ����
			nums[ex] = nums[i];
			ex++;
		}
	}
	return len;
}
//----------------------------------------

int main()
{
	Solution sol;
	vector<int> nums{ 1, 2, 3, 4, 5, 6, 3, 3, 3, 9, 3, 10, 11, 12, 13, 14, 3, 15, 3 };
	int val = 3;
	cout << sol.removeElement(nums, val)<<endl;
	system("pause");
	return 0;
}