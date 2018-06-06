#include"Happy Number.h"

//错误解法：自己编写，原因，当不是happy时，n形成一个不含1的循环，所以第一个while无限循环，无法跳出
/*
bool Solution::isHappy(int n)
{
	int sum = n;
	while (sum != 1)
	{
		n=sum;
		sum = 0;
		while (n)
		{
			sum += (n % 10)*(n % 10);
			n /= 10;
		}
	}
}
*/

//******************leetcode官网******************
int digitSquareSum(int n) {
	int sum = 0, tmp;
	while (n) {
		tmp = n % 10;
		sum += tmp * tmp;
		n /= 10;
	}
	return sum;
}

bool Solution::isHappy(int n) {
	int slow, fast;
	slow = fast = n;
	do {
		slow = digitSquareSum(slow);
		fast = digitSquareSum(fast);
		fast = digitSquareSum(fast);
	} while (slow != fast);
	if (slow == 1) return 1;
	else return 0;
}
//--------------------------------------

int main()
{
	Solution sol;
	cout << sol.isHappy(19) << endl;
	system("pause");
	return 0;
}
