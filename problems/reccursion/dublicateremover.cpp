#include<iostream>
using namespace std;

string dubremov(string str)
{
	if(str.length()==0)
		return str;
	string substring=dubremov(str.substr(1));
	int n=str.length()-1;
	if(str[n]==substring[0])
		return substring;
	else
		return str[n]+substring;
}
int main()
{
	string str="aabccd";
	str=dubremov(str);
	for(int i=0;i<str.length();i++)
	{
		cout<<str[i]<<" ";
	}
	return 0;
}
