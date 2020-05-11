#include<iostream>
using namespace std;

string starbwsameelements(string str1)
{
	if(str1.length()==1)
	{
		return str1;
	}
	char temp=str1[0];
	string substring1=str1.substr(1);
	
	string a=starbwsameelements(substring1);
	if(temp==a[0])
	{
		return temp +(string)"*"+ a;
	}
	else
	{
		return temp + a;
	}
}
int main()
{
	string sing="abbhishhek";	
	string s=starbwsameelements(sing);
	for(int i=0;i<s.length();i++)
	{
		cout<<s[i];
	}
	return 0;
}
