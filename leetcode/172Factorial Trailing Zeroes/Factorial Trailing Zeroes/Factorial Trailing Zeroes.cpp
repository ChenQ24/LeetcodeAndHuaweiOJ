#include"Factorial Trailing Zeroes.h"

//****************leetcode��վ�ⷨ����5�ĸ�����25=5^2��2��5,125=5^3��3��5��*************
int Solution::trailingZeroes(int n)
{
	int result = 0;
	for (long long i = 5; n / i>0; i *= 5){
		result += (n / i);//�����ĺ�����Ǳ��������м�������������n���м���i��n/i
	}
	return result;
}
//-------------------------------------------------

int main()
{
	Solution sol;
	cout << sol.trailingZeroes(25)<<endl;
	system("pause");
	return 0;
}