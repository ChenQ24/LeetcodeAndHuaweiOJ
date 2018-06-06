#include<iostream>
#include<string>
#include<sstream>
using namespace std;

	string::size_type begin = 0;
	string::size_type end = 0;

void coordinateMove(int &x,int &y,string &str){
//	string str_step;
	for (; str[::end]!=';'&&::end<str.size(); ::end++){

	}
	if (::end < str.size()){

		string str_step(str, ::begin, ::end - ::begin);
		string str_int_step(str, ::begin+1, ::end - ::begin-1);
		::begin = ::end + 1;
		::end = ::end + 1;
		stringstream stream;
		int int_step;
		if ((str_step.size() == 3 && isdigit(str_step[1]) && isdigit(str_step[2])) || (str_step.size() == 2 && isdigit(str_step[1]))){
			stream << str_int_step;
			stream >> int_step;
			switch (str_step[0]){
				case 'A':{
							 x -= int_step;
							 break;
				}
				case 'D':{
							 x += int_step;
							 break;
				}
				case 'S':{
							 y -= int_step;
							 break;
				}
				case 'W':{
							 y += int_step;
							 break;
				}
				case 'a':{
							 x -= int_step;
							 break;
				}
				case 'd':{
							 x += int_step;
							 break;
				}
				case 's':{
							 y -= int_step;
							 break;
				}
				case 'w':{
							 y += int_step;
							 break;
				}
			defaule:;
			}
		}
	}
}

int main(){
	string str;
	cin >> str;
	int x = 0, y = 0;
	for (; ::end < str.size(); ){
		coordinateMove(x, y, str);
	}
	cout << x << ',' << y;
	//	int begin = 0;
	//	int end = 0;
	//	string str_step;
	system("pause");
	return 0;
}