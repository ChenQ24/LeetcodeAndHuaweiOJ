#include "Valid Parentheses.h"


/*
//*******************LEETCODE官网***************
bool Solution::isValid(string s)
{

 stack<char> paren;
        for (char& c : s) {
            switch (c) {
                case '(': 
                case '{': 
                case '[': paren.push(c); break;
                case ')': if (paren.empty() || paren.top()!='(') return false; else paren.pop(); break;
                case '}': if (paren.empty() || paren.top()!='{') return false; else paren.pop(); break;
                case ']': if (paren.empty() || paren.top()!='[') return false; else paren.pop(); break;
                default: ; // pass
            }
        }
        return paren.empty() ;
}
//---------------------------------
*/


bool Solution::isValid(string s)
{
	map<char, int> map1 = {
		{ '(', 1 },
		{ ')', 2 },
		{ '[', 3 },
		{ ']', 4 },
		{ '{', 5 },
		{ '}', 6 }
	};
//	auto it1 = s.begin();
	auto it = s.begin();
	int flag;

//	while (it != s.end() && map1.count(*it) == 1)
	while (map1.count(*it) == 1)//注意：不将&&&处的it == s.end()放到while中使条件为map1.count(*it) == 1&&it != s.end(），是因当it变为s.end时，map1.count(*it)会访问无效迭代器（即s.end()），出错
	{											//但是！！！！！可将map1.count(*it) == 1&&it != s.end(）写为it != s.end()&&map1.count(*it) == 1
		++it;
		if (it == s.end())//&&&
			break;
	}
		
	if (it == s.end())
		it = s.begin();
	else
//	if (map1.count(*it1) == 0)
		return false;



	if (map1.at(*it) % 2 == 0)
		return false;
	else if (map1.at(*it) % 2 == 1)
	{
		if (s.size() % 2 == 0)
		while (it != s.end())
		{
			flag = map1.at(*it);
			if ((flag + 1) != map1.at(*(it + 1)))
				return false;
			else
				it += 2;
		}
		else if (s.size() % 2 == 1)
		{
			while (it != (s.end() - 1))
			{
				flag = map1.at(*it);
				if ((flag + 1) != map1.at(*(it + 1)))
					return false;
				else
					it += 2;
			}
			if (map1.at(*it) % 2 == 1)
				it++;
		}
		if (it == s.end())
			return true;
		else
			return false;
	}

			

}

int main()
{
	Solution sol;
	cout << "please input string:" << endl;
	string str;
	cin >> str;
	cout<<sol.isValid(str)<<endl;
	system("pause");
	return 0;
}