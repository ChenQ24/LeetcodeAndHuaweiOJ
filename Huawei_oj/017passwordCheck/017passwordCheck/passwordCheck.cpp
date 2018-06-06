#include<iostream>  
#include<vector>  
#include<iostream>  
#include<string>  
#include<set>  
#include<sstream>  
#include<algorithm>  
using namespace std;

//�ж��Ƿ���ڳ��ȴ���2���Ӵ�  
int judgeSubStr(string str)
{
	int i, j;
	string subStr1 = "";
	string subStr2 = "";
	for (i = 0; i<str.length() - 3; i++)
	{
		subStr1 = str.substr(i, 3);
		for (j = i + 3; j<str.length() - 2; j++)
		{
			subStr2 = str.substr(j, 3);
			if (subStr1 == subStr2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	string s1;
	int i, j, k;
	int count = 0;
	set<char> letterSmall;//�洢Сд��ĸ  
	set<char> letterBig;//�洢��д��ĸ  
	set<char> number;//�洢����  
	set<char> other;//�洢�����ַ�  
	while (cin >> s1)
	{
		//���������  
		letterSmall.clear();
		letterBig.clear();
		number.clear();
		other.clear();
		if (s1.length() <= 8)
		{
			//cout<<"length"<<endl;  
			cout << "NG" << endl;
			continue;
		}
		if (judgeSubStr(s1))
		{
			//cout<<"sub"<<endl;  
			cout << "NG" << endl;
			continue;
		}

		for (i = 0; i<s1.length(); i++)
		{
			if (s1[i] >= 'a'&&s1[i] <= 'z')
				letterSmall.insert(s1[i]);
			else if (s1[i] >= 'A'&&s1[i] <= 'Z')
				letterBig.insert(s1[i]);
			else if (s1[i] >= '0'&&s1[i] <= '9')
				number.insert(s1[i]);
			else
				other.insert(s1[i]);
		}

		int count = 0;
		if (letterSmall.size()>0)//˵������Сд��ĸ  
			count++;
		if (letterBig.size()>0)//˵�����ڴ�д��ĸ  
			count++;
		if (number.size()>0)//˵����������  
			count++;
		if (other.size()>0)//˵�����������ַ�  
			count++;
		//cout<<letterSmall.size()<<letterBig.size()<<number.size()<<other.size()<<endl;  
		if (count >= 3)
		{
			cout << "OK" << endl;
		}
		else
		{
			cout << "NG" << endl;
		}
	}
}

//�Լ�����û��ͨ������Ϊ�Լ�����
/*
#include<iostream>
#include<string>
#include<vector>

using namespace std;

bool correctSymbols(string & str){
	int cnt = 0;
	bool flagUp = false;
	bool flagDown = false;
	bool flagNum = false;
	bool flagOth = false;
	for (char c : str){
		if (isdigit(c)){
			flagNum = true;
		}
		else if (islower(c)){
			flagDown = true;
		}
		else if (isupper(c)){
			flagUp = true;
		}
		else{
			flagOth = true;
		}
	}
	if (flagNum)
		cnt++;
	if (flagDown)
		cnt++;
	if (flagOth)
		cnt++;
	if (flagUp)
		cnt++;

	if (cnt > 2)
		return true;
	else
		return false;
}
*/
/*
int main(){
	string str;
	string result;
	int count = 0;
	int k = 0, t = 0;
	while (getline (cin,str) ){
		if (str.size() > 8){
			if (correctSymbols(str)){
				for (int i = 0; i < str.size() - 3; i++){
					for (int j = i+1; j < str.size() - 2; j++){
						k = i;
						t = j;
						count = 0;
						while ((k<str.size()&&t<str.size())&&(str[k++] == str[t++])){
							count++;
						}
						if (count>2){
							cout << "NG";
							result = "NG";
							break;
						}						
					}
					if (result != "")
						break;
				}

				if (count<=2){
					cout << "OK";
				}
			}
			else{
				cout << "NG";
			}
			
		}
		else{
			cout << "NG";
		}
		system("pause");
	}
		
}
*/

/*
int main(){
	string str;
	string result;
	int count = 0;
	int k = 0, t = 0;
	vector<string> v_str;
	while ((getchar()!=EOF)&&getline(cin, str)){
		if (str.size() > 8){
			if (correctSymbols(str)){
				for (int i = 0; i < str.size() - 3; i++){
					for (int j = i + 1; j < str.size() - 2; j++){
						k = i;
						t = j;
						count = 0;
						while ((k<str.size() && t<str.size()) && (str[k++] == str[t++])){
							count++;
						}
						if (count>2){
				//			cout << "NG";
							v_str.push_back("NG");
							result = "NG";
							break;
						}
					}
					if (result != "")
						break;
				}

				if (count <= 2){
		//			cout << "OK";
					v_str.push_back("OK");
				}
			}
			else{
		//		cout << "NG";
				v_str.push_back("NG");
			}

		}
		else{
	//		cout << "NG";
			v_str.push_back("NG");
		}
		
	}

	for (string ss : v_str){
		cout << ss << endl;
	}
	system("pause");
}
*/