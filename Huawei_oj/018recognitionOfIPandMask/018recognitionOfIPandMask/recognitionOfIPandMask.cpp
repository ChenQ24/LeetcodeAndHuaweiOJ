#include<iostream>  
#include<string>  
#include<math.h>  
using namespace std;
int ip[4], mask[4];
int ipA = 0, ipB = 0, ipC = 0, ipD = 0, ipE = 0, ipErr = 0, ipP = 0;
bool ipJudge(string ipstr, string maskstr)
{
	string tmp;
	unsigned int mask_int = 0;
	for (int i = 0; i<3; i++)
	{
		int pos = ipstr.find_first_of('.');
		tmp = ipstr.substr(0, pos);
		if (tmp.empty())
			ip[i] = -1;
		else
			ip[i] = atoi(tmp.c_str());//×ö±Ê¼Ç£¬ÕÆÎÕc_strº¯Êı
		ipstr = ipstr.substr(pos + 1);
	}
	if (ipstr.empty())
		ip[3] = -1;
	else
		ip[3] = atoi(ipstr.c_str());
	for (int i = 0; i<3; i++)
	{
		int pos = maskstr.find_first_of('.');
		tmp = maskstr.substr(0, pos);
		if (tmp.empty())
			mask[i] = -1;
		else
			mask[i] = atoi(tmp.c_str());

		maskstr = maskstr.substr(pos + 1);
	}
	if (maskstr.empty())
		mask[3] = -1;
	else
		mask[3] = atoi(maskstr.c_str());
	for (int i = 0; i<4; i++)
	{
		if (ip[i]<0 || ip[i]>255 || mask[i]<0 || mask[i]>255)
		{
			ipErr++;
			return false;
		}
		mask_int = mask_int * 256 + mask[i];
	}
	mask_int = ~mask_int + 1;
	unsigned int test = 0x01;
	int flag = 0;
	for (int i = 0; i<32; i++)
	{

		if (mask_int == test << i)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		ipErr++;
		return false;
	}
	if (ip[0] >= 1 && ip[0] <= 126)
	{
		ipA++;
		if (ip[0] == 10)
			ipP++;
	}
	else if (ip[0] >= 128 && ip[0] <= 191)
	{
		ipB++;
		if (ip[0] == 172 && ip[1] >= 16 && ip[1] <= 31)
			ipP++;
	}
	else if (ip[0] >= 192 && ip[0] <= 223)
	{
		ipC++;
		if (ip[0] == 192 && ip[1] == 168)
			ipP++;
	}
	else if (ip[0] >= 224 && ip[0] <= 239)
		ipD++;
	else
		ipE++;
	return true;
}
int main()
{
	string str, ipstr, maskstr;
	while (getline(cin, str))
	{
		int pos = str.find('~');
		ipstr = str.substr(0, pos);
		maskstr = str.substr(pos + 1);
		ipJudge(ipstr, maskstr);
	}
	cout << ipA << " " << ipB << " " << ipC << " " << ipD << " " << ipE << " " << ipErr << " " << ipP << endl;
	system("pause");  
	return 0;
}