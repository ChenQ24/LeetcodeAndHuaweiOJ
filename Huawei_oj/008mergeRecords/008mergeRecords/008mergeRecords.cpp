#include<iostream>
#include<map>
using namespace std;

int main(){
//	multimap<int, int> m;
	map<int, int> m;
	int n;
	int index, value;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> index;
		cin>>value;
		if (m.find(index) == m.end())
			m[index] = value;
		else{
			value += (m.find(index))->second;
			m[index] = value;
		}
		
	}
	for (auto m1 : m){
		cout << m1.first << ' ' << m1.second << endl;
	}
//	system("pause");
	return 0;
}