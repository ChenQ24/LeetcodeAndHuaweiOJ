#include "Valid Parentheses.h"


/*
//*******************LEETCODE����***************
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
	while (map1.count(*it) == 1)//ע�⣺����&&&����it == s.end()�ŵ�while��ʹ����Ϊmap1.count(*it) == 1&&it != s.end(��������it��Ϊs.endʱ��map1.count(*it)�������Ч����������s.end()��������
	{											//���ǣ����������ɽ�map1.count(*it) == 1&&it != s.end(��дΪit != s.end()&&map1.count(*it) == 1
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