#include "Palindrome Number.h"

//�ص㣺�����ռ�ȡ��ͷ��β��β��Ȼ������ȡ�ã�ͷ����"/"ȡ�ã����ǹؼ��������������ĳ�������ʽ ��
//****************����ⷨ********
bool Solution::isPalindrome(int x)
{
	int left = -1, right = -2,len=1;
	if (x < 0)
	{
		cout << "��Ϊ��"<<x << endl;
		return false;

	}
	/*						ע�⣺���ü�else if�����Σ���Ϊ����������Ϊ��ֵ�������ϱߵ�if��x<0)��䡣����һ����δ�����ֻҪx>0x7fffffff��������ʲôֵ�������-858993460��
	else if (x>0x7fffffff)
	{
		cout << "���" << endl;
		return false;

	}
	*/


	else
	{
		while (x>=10)
		{
			while (x / len >= 10)
				len *= 10;
			left = x / len;
			right = x % 10;
			if (left != right)
				return false;
			else
			{
				x = (x - left*len) / 10;
				len = 1;
			}
		}
		return true;
		
	}
}
//-------------------------------

int main()
{
	Solution sol;
	int n;
	bool y;
	cout << "�����룺" << endl;
	cin >> n;
	y=sol.isPalindrome(n);
	cout << y << endl;
	system("pause");
	return 0;
}