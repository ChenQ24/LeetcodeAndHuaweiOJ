#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s1, s2;
	vector<string> Vstr;
	getline(cin, s1);
	getline(cin, s2);
	while (s1.size() > 0)
	{
		if (s1.size() >= 8)
		{
			string str(s1, 0, 8);
			Vstr.push_back(str);
			s1.erase(0, 8);
		}
		else
		{
			string str1(s1);
			for (int i = s1.size(); i < 8; i++)
			{
				str1 += '0';
			}
			Vstr.push_back(str1);
			s1.erase();
		}
	}
	while (s2.size() > 0)
	{
		if (s2.size() >= 8)
		{
			string str(s2, 0, 8);
			Vstr.push_back(str);
			s2.erase(0, 8);
		}
		else
		{
			string str2(s2);
			for (int i = s2.size(); i < 8; i++)
			{
				str2 += '0';
			}
			Vstr.push_back(str2);
			s2.erase();
		}
	}
	for (auto m : Vstr)
	{
		cout << m << endl;
	}
//	system("pause");
	return 0;
}