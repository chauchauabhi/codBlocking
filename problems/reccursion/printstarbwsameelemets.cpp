//Finding * bw same elements 
 

#include<vector>
#include<iostream>
using namespace std;

char printlasta(vector <char> arr,int n,int i=0)
{
	if(i==n-1)
	{	
		cout<<i<<endl;
		return i;
	}
	
		int ans=printlasta(arr,i+1);
		cout<<arr[i]<<arr[ans]<<endl;
		if(arr[ans]==arr[i])
		{
			n++;
			arr.insert(arr.begin()+i,'*');
			cout<<arr[i]<<endl;
			return i;
		}
		else 
		{
			if(i==0)
			{   
				cout<<"heheh";
				for(int k=0;k<n;k++)
					{
						cout<<arr[k]<<endl;
					}
				return 0;
			}
			else
			{
				cout<<"ending here1"<<endl;
				return i;
			}
		}
}
int main()
{
	vector <char> arr;
	arr.push_back('3');
	arr.push_back('5');
	arr.push_back('5');
	arr.push_back('4');
//	arr.push_back('1');	
//	arr.push_back('7');	
	int n=arr.size();
	printlasta(arr,n,0);
	n=arr.size();
	return 0;
}
