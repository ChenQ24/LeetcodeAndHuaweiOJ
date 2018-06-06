/*

//单词博弈
#include <iostream>
#include<string>
#include <algorithm>
#include<math.h>
using namespace std;

int f(string,int);
int isGonnaWin(string);
bool isGrowing(string s);//判断是否严格递增

int main(){
//cout<<isGonnaWin("aaa")<<endl;
//cout<<isGonnaWin("bad")<<endl;
string s;
cin>>s;
cout<<(1+f(s,0))%2<<endl;
system("pause");
}

int f(string s,int ind){//1st=0 for 甲,1st=1 for 乙
int WinInd=-1;
string cur;
if(!isGonnaWin(s)){
for(int i=0;i<s.length();i++){
cur=s;
WinInd = f(cur.erase(i,1),(ind+1)%2);
if(WinInd=0)//删除第i个字符后，胜者是甲，就不用继续看下面的情况了
return 0;
}
return 1;//删除任一字符，胜者都不是甲，那么胜者是乙了 。
}
return ind;// 如果isGonnaWin判定为1，则当前的ind会赢
}

int isGonnaWin(string remain){
// 如果仅仅有一个单词怪异,并且删除后严格递增
int bad_times=0, bad_loc;
char bad_char;
string cur;
int i=0;
while(1){
if(i==remain.size()-1)
break;
if(remain[i+1]<=remain[i])
bad_times=1;bad_loc=i+1; break;
i++;
}
if(!bad_times){return -1;}//已经是严格递增说明不会赢
else{//如果找到了第一个不对的位置
cur=remain;
bool b1 = isGrowing(cur.erase(bad_loc,1));
cur=remain;
bool b2 = isGrowing(cur.erase(bad_loc-1,1));
if(b1||b2){
return 1;
}
return 0;
}
}
bool isGrowing(string s){//判断是否严格递增
for(int i=0;i<s.length()-1;i++){
if(s[i+1]<=s[i])
return 0;
}
return 1;
}
*/





#include<iostream>
#include<string>
using namespace std;






static bool flag = 0;

bool isright(string in){
	int n = in.size();
	for (int i = 1; i < n; i++){
		if (in[i-1] >= in[i]){
			return false;
		}

	}
	return true;
}

string choose(string in){
	int n = in.size();
	for (int i = 1; i < n; i++){
		if (in[i - 1] >= in[i]){
			string s1(in, 0, i - 1);
			string s2(in, i, n - i);
			return (s1 + s2);
		}
	}
}

int who(string in){
//	bool flag = 1;
	if (flag == 1 && in.size() == 1){
		return 1;
	}
	else if (flag == 0 && in.size() == 1){
		return 0;
	}
	else if(flag==1&&isright(in)) {
		return 1;
	}
	else if (flag == 0 && isright(in)) {
		return 0;
	}
	else{
		in = choose(in);
		flag = ~flag;
		return who(in);
	}
}

int main(){

	//随便试试
	/*
	char ch[16] = "单程卡";
	cout << ch << endl;
	*/

	string s;
	cin >> s;
	cout<< who(s);
	system("pause");
	return 0;

}