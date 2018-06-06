#include"Count Primes.h"

/*
���ⷽ�����ڵڶ�����ʾ������˹����ɸ��Sieve of Eratosthenes�У�����㷨�Ĺ�������ͼ��ʾ��
���Ǵ�2��ʼ����������n�����ҵ���һ������2��Ȼ�������еı���ȫ����ǳ�����Ȼ����һ������3��
��������б�����һ�����ƣ�ֱ������n����ʱ������δ����ǵ����־���������������Ҫһ��n-1���ȵ�
bool����������¼ÿ�������Ƿ񱻱�ǣ�����Ϊn-1��ԭ������Ŀ˵��С��n��������������������n�� 
Ȼ������������forѭ����ʵ�ְ�����˹����ɸ�����ѶȲ����Ǻܴ�
*/

//***************leetcode����(�Լ��Ľⷨ�Ǳ�����̫��)*******************

int Solution::countPrimes(int n)
{
	vector<bool> prime(n, true);//С��n�ķǸ�����n����0~n-1��
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
//**********************��ϰʱ���Լ��뷨*********
//�������£�δ���ԣ�
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