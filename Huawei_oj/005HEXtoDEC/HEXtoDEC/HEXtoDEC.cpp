#include<iostream>
#include<string>
using  namespace std;

int main()
{
	string s;
	getline(cin , s);
	int n = s.size();
	int exp = 0;
	int result=0;
	for (int i = s.size()-1; i >1; i--)
	{
		if (isdigit(s[i]))
		{
			result += (s[i] - '0')*pow(16, exp);
		}
		else if (toupper(s[i]) >= 'A'&&toupper(s[i]) <= 'F')
		{
			result += ((int)((char)(toupper(s[i]) - 17) - '0') + 10)*pow(16 , exp);
		}
		exp++;
	}
	cout << result;
	system("pause");
	return 0;
}