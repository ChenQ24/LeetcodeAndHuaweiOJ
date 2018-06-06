#include"Power of Two.h"

//****************网络解法（红黑联盟：哈哈的个人专栏）****************
bool Solution::isPowerOfTwo(int n)
{
	return (n > 0) && (!(n&(n - 1)));//2的N次幂的特点：仅有首位为1，其余各位都为0.
}
//--------------------
int main()
{
	Solution sol;
	cout << sol.isPowerOfTwo(123) << endl;
	system("pause");
	return 0;
}