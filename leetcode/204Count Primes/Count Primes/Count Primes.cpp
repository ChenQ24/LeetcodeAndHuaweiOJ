#include"Count Primes.h"

/*
解题方法就在第二个提示埃拉托斯特尼筛法Sieve of Eratosthenes中，这个算法的过程如下图所示，
我们从2开始遍历到根号n，先找到第一个质数2，然后将其所有的倍数全部标记出来，然后到下一个质数3，
标记其所有倍数，一次类推，直到根号n，此时数组中未被标记的数字就是质数。我们需要一个n-1长度的
bool型数组来记录每个数字是否被标记，长度为n-1的原因是题目说是小于n的质数个数，并不包括n。 
然后我们用两个for循环来实现埃拉托斯特尼筛法，难度并不是很大，
*/

//***************leetcode官网(自己的解法是遍历，太烦)*******************

int Solution::countPrimes(int n)
{
	vector<bool> prime(n, true);//小于n的非负数共n个（0~n-1）
	prime[0] = false, prime[1] = false;
	for (int i = 0; i < sqrt(n); ++i) {		
		if (prime[i]) {
			for (int j = i*i; j < n; j += i) {
				prime[j] = false;
			}
		}
	}
	return count(prime.begin(), prime.end(), true);

}
//--------------------------------------

/*
//**********************复习时，自己想法*********
//代码如下（未调试）
int Solution::countPrimes(int n)
{
	int count = n;
	for (int i=1;i<=n;i++)
	{
		for(int j=i*i;j<n;j+=j)
		{
			count--;
		}
	}
}
//--------------------------------
*/

int main()
{
	Solution sol;
	cout << sol.countPrimes(25) << endl;
	system("pause");
	return 0;
}