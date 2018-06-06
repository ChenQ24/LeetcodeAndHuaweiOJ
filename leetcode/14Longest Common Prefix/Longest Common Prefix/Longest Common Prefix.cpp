#include "Longest Common Prefix.h"
//寻找最长公共前缀


string Solution::longestCommonPrefix(vector<string>& strs)
{
	auto v_it = strs.begin();
	auto v_it1 = strs.begin()+1;
	string prefix;

	while (v_it1 != strs.end())
	{
		auto s_it = (*v_it).begin();
		auto s_it1 = (*v_it1).begin();
		while (*s_it == *s_it1)
		{
			s_it++, s_it1++;
		};
		prefix.assign(*v_it1, 0, s_it1 - (*v_it1).begin());//注意：变量类型不要弄错，不可缺少*
		v_it++, v_it1++;
	}
		
	return prefix;
};

int main()
{
	vector<string> str_vec;
	str_vec.push_back("abcdefghijklmnopq");
	str_vec.push_back("abcdefghijkkkkkkk");
	str_vec.push_back("abcdefghijkltpipq");
//	str_vec.push_back("abca");
	Solution sol;
	string prefix;
	prefix = sol.longestCommonPrefix(str_vec);
	cout << prefix<<endl;
	system("pause");
	return 0;

}