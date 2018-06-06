#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int n = s.size();
	int i = n - 1;
	while (i >= 0 && s[i] == ' ')
		i--;
	int end = i;
	while (i >= 0 && s[i] != ' ')
		i--;
	int begin = i;
	cout << end - begin << endl;
	return 0;

}