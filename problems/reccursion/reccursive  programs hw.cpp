#include<iostream>
using namespace std;
/*
int comp(int n)
{
	if(n!=0 || n!=1)
	{
		return n;
	}
}
*/
int nsum(int n)
{
	if(n==1)
		return 1;
	int sum=n;
	sum=sum+(nsum(n-1));
	cout<<"ahahs"<<endl;
	return sum;
}
void decr(int n)
{
	if(n==0)
	{
		cout<<n<<endl;
		return;
	}
	cout<<n<<endl;
	decr(n-1);
}
void incr(int n)
{
	if(n==0)
	{
		cout<<n<<endl;
		return;
	}
	incr(n-1);
	cout<<n<<endl;
	return;	s
}
void incr(int n,int a=1)
{
	if(n==a)
	{
		cout<<n<<endl;
		return;
	}
	incr(n-1,a);
	cout<<n<<endl;
	return;	
}
void decrincr(int n)
{
	decr(n);
//	incr(n,comp(n));            ////ask doubt 
	incr(n,1);
	return;

}

int main()
{
	//out<<nsum(4);
	decrincr(5);
//	incr(5);
//	decr(5);
	return 0;
}
