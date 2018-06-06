#include"Factorial Trailing Zeroes.h"

//****************leetcode网站解法（找5的个数，25=5^2有2个5,125=5^3有3个5）*************
int Solution::trailingZeroes(int n)
{
	int result = 0;
	for (long long i = 5; n / i>0; i *= 5){
		result += (n / i);//除法的含义就是被除数里有几个除数，所以n里有几个i就n/i
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