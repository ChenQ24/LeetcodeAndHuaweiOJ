#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
	
	int n;
	string s;
	stringstream sstr;
	cin >> n;
	sstr << n;
	sstr >> s;
	string str(s.rbegin(), s.rend() );
	cout << str;
	system("pause");
	return 0;
	
	/*
	char ch;
	vector<char> vect;
	while (cin >> ch)
	{
		vect.push_back(ch);
	}
	reverse(vect.begin(), vect.end());    // 将装有字符的向量反转
	for (auto it : vect)
	{
		cout << it;
	}
	cout << endl;
	*/
	/*
	int num;
	cin >> num;
	if (num<0)
		return -1;
	else
	{
		char string[32];
		_itoa_s(num, string,32, 10);
		for (int i = strlen(string) - 1; i >= 0; i--)
		{
			cout << string[i];
		}
	}
	*/
	system("pause");
	return 0;
}