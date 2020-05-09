#include<iostream>
using namespace std;

int countbinary(int n)
{
	if(n==0 or n==1)
		return n+1;
	int count0=countbinary(n-1);
	int count1=countbina	ry(n-2);
	return count0+count1;
}
int main()
{
	int n=3;
	cout<<countbinary(n);
	return 0;
}
