/*

//���ʲ���
#include <iostream>
#include<string>
#include <algorithm>
#include<math.h>
using namespace std;

int f(string,int);
int isGonnaWin(string);
bool isGrowing(string s);//�ж��Ƿ��ϸ����

int main(){
//cout<<isGonnaWin("aaa")<<endl;
//cout<<isGonnaWin("bad")<<endl;
string s;
cin>>s;
cout<<(1+f(s,0))%2<<endl;
system("pause");
}

int f(string s,int ind){//1st=0 for ��,1st=1 for ��
int WinInd=-1;
string cur;
if(!isGonnaWin(s)){
for(int i=0;i<s.length();i++){
cur=s;
WinInd = f(cur.erase(i,1),(ind+1)%2);
if(WinInd=0)//ɾ����i���ַ���ʤ���Ǽף��Ͳ��ü���������������
return 0;
}
return 1;//ɾ����һ�ַ���ʤ�߶����Ǽף���ôʤ�������� ��
}
return ind;// ���isGonnaWin�ж�Ϊ1����ǰ��ind��Ӯ
}

int isGonnaWin(string remain){
// ���������һ�����ʹ���,����ɾ�����ϸ����
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
if(!bad_times){return -1;}//�Ѿ����ϸ����˵������Ӯ
else{//����ҵ��˵�һ�����Ե�λ��
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
bool isGrowing(string s){//�ж��Ƿ��ϸ����
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

	//�������
	/*
	char ch[16] = "���̿�";
	cout << ch << endl;
	*/

	string s;
	cin >> s;
	cout<< who(s);
	system("pause");
	return 0;

}