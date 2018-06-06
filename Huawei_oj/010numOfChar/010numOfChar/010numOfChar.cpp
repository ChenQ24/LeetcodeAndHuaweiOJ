#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	set<char> iset;
	for (char a : s)
		iset.insert(a);
	cout << iset.size();
	system("pause");
	return 0;
}