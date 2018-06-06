#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
	int n;
	cin >> n;
	multiset<string> iset;
	string s;
	
	for (int i = 1; i <= n; i++){
		cin >> s;
		iset.insert(s);

	}
	for (string str : iset)
 		cout << str << endl;
	system("pause");
	return 0;
}