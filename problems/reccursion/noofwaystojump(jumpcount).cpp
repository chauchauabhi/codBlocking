#include<iostream>
using namespace std;

int noofwaystojump(int start,int end,int tj)
{
	
	if(start==end)
		return 1;
	if(start>end)
		return 0;
		int count =0;
	for(int i=1;i<=tj;i++)
	{
		count+=noofwaystojump(start+tj,end,tj);
	}
	return count;
}

int main()
{
	int n=5	;
	cout<<noofwaystojump(0,4,4);
}
