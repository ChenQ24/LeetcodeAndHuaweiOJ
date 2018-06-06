#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	char ch;
	getline(cin, s);
	cin >> ch;
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (ch == s[i] || (isalpha(s[i]) && isalpha(ch) && (tolower(ch) == tolower(s[i]))))
			count++;
	}
	cout << count;
	return 0;

}