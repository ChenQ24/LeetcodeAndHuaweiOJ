#include "Palindrome Number.h"

//重点：常数空间取出头和尾：尾自然用求余取得，头则用"/"取得（这是关键，关于整形数的常见处理方式 ）
//****************网络解法********
bool Solution::isPalindrome(int x)
{
	int left = -1, right = -2,len=1;
	if (x < 0)
	{
		cout << "数为："<<x << endl;
		return false;

	}
	/*						注意：不用加else if溢出这段，因为溢出后，输出即为负值，进入上边的if（x<0)语句。但有一问题未解决“只要x>0x7fffffff，无论是什么值，都输出-858993460”
	else if (x>0x7fffffff)
	{
		cout << "溢出" << endl;
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
	cout << "请输入：" << endl;
	cin >> n;
	y=sol.isPalindrome(n);
	cout << y << endl;
	system("pause");
	return 0;
}