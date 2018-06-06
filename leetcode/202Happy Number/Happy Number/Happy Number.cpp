#include"Happy Number.h"

//����ⷨ���Լ���д��ԭ�򣬵�����happyʱ��n�γ�һ������1��ѭ�������Ե�һ��while����ѭ�����޷�����
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

//******************leetcode����******************
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
