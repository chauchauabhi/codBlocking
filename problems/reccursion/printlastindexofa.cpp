//Finding right most index at which a appeaers


#include<iostream>
using namespace std;

int printlasta(int arr[],int n,int a,int i=0)
{
	if(i==n-1)
	{
		if(arr[i]==a)
			return i;
		else 
			return 0;
	}
		int ans=printlasta(arr,n,a,i+1);
		if(ans)
		{
			cout<<i<<endl;
			return ans;
		}
		else 
		{
			if(arr[i]==a)
				return i;
			else
				return 0;
		}
}

int main()
{
	int arr[]={19,2,4,1,9};
	int n=5;
	cout<<"ans is"<<printlasta(arr,n,19,0)<<endl;
	return 0;
}
