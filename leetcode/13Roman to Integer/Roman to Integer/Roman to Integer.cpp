#include "Roman to Integer.h"

//************自己解法1*************
int Solution::romanToInt(string s)
{
	map<char, int> map1 = {
		{ 'I', 7 },
//		{ "II", 7 },
//		{ "III", 7 },
		{ 'V', 6 },
		{ 'X', 5 },
		{ 'L', 4 },
		{ 'C', 3 },//100
		{ 'D', 2 },//500
		{ 'M', 1 } //1000
	};
	map<char, int> map2 = {
		{ 'I', 1 },
		//		{ "II", 7 },
		//		{ "III", 7 },
		{ 'V', 5 },
		{ 'X', 10 },
		{ 'L', 50 },
		{ 'C', 100 },//100
		{ 'D', 500 },//500
		{ 'M', 1000 } //1000
	};

	int a,b,sum=0;
	auto s_it = (s.end() - 1);
	auto s_it2 = (s.end() - 2);
	sum += map2.at(*s_it);
	while (s_it2 != s.begin())
	{
		/*
		//-----------使用迭代器
		auto map1_it = map1.find(*s_it);
		auto map1_it2 = map1.find(*s_it2);

		if (map1_it->second >= map1_it2->second)
			sum += map2.at(*s_it2);
		else
			sum -= map2.at(*s_it2);
		//----------------------------
		*/

		//------------使用下标
		if (map1.at(*s_it) >= map1.at(*s_it2))
			sum += map2.at(*s_it2);
		else
			sum -= map2.at(*s_it2);
		//---------------------

		s_it--;
		s_it2--;
	}

	if (map1.at(*s_it)>=map1.at(*s_it2))
		sum += map2.at(*s_it2);
	else
		sum -= map2.at(*s_it2);

	return sum;

}
//-----------------------------------

/*
//*********自己解法2***************
不用定义map1，直接用map2(或一种类似map的映射结构)即可：if (map1.at(*s_it) <= map1.at(*s_it2)) 	sum += map2.at(*s_it2); 	else	sum -= map2.at(*s_it2);
另外，用string的下标形式s[i]

//--------------------
*/



int main()
{
	Solution sol;
	int sum;
	string s;
	cout << "输入罗马数字：" << endl;
	cin >> s;
	sum = sol.romanToInt(s);
	cout << sum << endl;
	system("pause");
	return 0;
}