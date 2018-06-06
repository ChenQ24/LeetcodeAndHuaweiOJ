#include"Isomorphic Strings.h"

/*
这道题让我们求同构字符串，就是说原字符串中的每个字符可由另外一个字符替代，可以被其本身替代，相同的字符一定要被同一个字符替代，
且一个字符不能被多个字符替代，即不能出现一对多的映射。根据一对一映射的特点，我们需要用两个哈希表分别来记录原字符串和目标字符串
中字符出现情况，由于ASCII码只有256个字符，所以我们可以用一个256大小的数组来代替哈希表，并初始化为0，我们遍历原字符串，分别从源
字符串和目标字符串取出一个字符，然后分别在两个哈希表中查找其值，若不相等，则返回false，若想等，将其值更新为i + 1，代码如下：
*/


//***********leetcode官网********************
bool Solution::isIsomorphic(string s, string t)
{
	int m1[256] = { 0 }, m2[256] = { 0 }, n = s.size();
	for (int i = 0; i < n; ++i) {
		if (m1[s[i]] != m2[t[i]]) return false;
		m1[s[i]] = i + 1;
		m2[t[i]] = i + 1;
	}
	return true;
}
//-----------------------------------------

int main()
{
	Solution sol;
	string s="paper";
	string t = "title";
	cout << sol.isIsomorphic(s, t) << endl;
	system("pause");
	return 0;


}