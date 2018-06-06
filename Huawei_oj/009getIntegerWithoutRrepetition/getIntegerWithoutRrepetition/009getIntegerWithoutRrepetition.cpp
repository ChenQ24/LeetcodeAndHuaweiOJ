#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	int num;
	unordered_set<int> iset;//注意要用unordered_set，因为set会按关键字升序
	cin >> num;
	int a=0,b;
	while (num){
		b = num % 10;
		iset.insert( b );
		num /= 10;
	}
	for ( auto n : iset){
		a *= 10;
		a += n;
	}
	cout << a;
//	system("pause");
	return 0;
}