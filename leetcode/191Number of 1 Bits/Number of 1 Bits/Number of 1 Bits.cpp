#include"Number of 1 Bits.h"

/*
//************�Լ��ⷨ**************
int Solution::hammingWeight(uint32_t n)
{
	uint32_t m;
	int result=0;
	for (int i = 0; i < 32;i++)
	{
		result += (n & 1);
		n >>= 1;
	}
	return result;
}
//--------------------------------------
*/


//****************leetcode�����ⷨ(���汦�伴Ϊ�˷�)**********************
int Solution::hammingWeight(uint32_t n)
{
	int res = 0;
	while (n)
	{
		n &= n - 1;//Each time of "n &= n - 1", we delete one '1' from n.
		++res;
	}
	return res;
}
//---------------------------------------

int main()
{
	Solution sol;
	int n = 11;
	cout << sol.hammingWeight(n) << endl;
	system("pause");
	return 0;
}