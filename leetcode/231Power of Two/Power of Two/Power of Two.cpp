#include"Power of Two.h"

//****************����ⷨ��������ˣ������ĸ���ר����****************
bool Solution::isPowerOfTwo(int n)
{
	return (n > 0) && (!(n&(n - 1)));//2��N���ݵ��ص㣺������λΪ1�������λ��Ϊ0.
}
//--------------------
int main()
{
	Solution sol;
	cout << sol.isPowerOfTwo(123) << endl;
	system("pause");
	return 0;
}