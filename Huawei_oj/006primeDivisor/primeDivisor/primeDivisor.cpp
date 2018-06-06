#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isPrime(long num)
{
	int count = 0;
	if (num == 1) return false;
	for (long j = 2; j <= num; j++)
	{
		if (num%j == 0)
			count++;
		if (count > 1)
			return false;
	}
	return true;
}

string getResult(long ulDataInput)
{
	string v;
	for (long i = 2; i <= ulDataInput; i++)
	{
		if (isPrime(i))
		{
			while (ulDataInput%i == 0)
			{
				v+=(i+'0');
				v += ' ';
				ulDataInput /= i;
			}
		}
	}
	v.erase((v.size()-1),1);
	return v;
}

int main()
{

	string s;
	long a;
	cin >> a;
	s = getResult(a);
//	for (auto str:s)
//		cout << str << ' ';
	cout << s << endl;
	system("pause");
	return 0;
	
	
}