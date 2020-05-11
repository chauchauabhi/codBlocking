#include<iostream>
using namespace std;

int mazehunter(int sr,int sc,int  er,int ec)
{
	cout<<sc<<" "<<sr<<"------";
	if(sc==ec && sr==er)
		return 1;
	if(sc>ec or sr>er)
		return 0;
	int rcount=0;
	int dcount=0;

	cout<<sc<<" "<<sr<<"count-"<<rcount<<dcount<<endl<<endl;
	rcount += mazehunter(sr,sc+1,er,ec);
 	dcount += mazehunter(sr+1,sc,er,ec);
	return rcount+dcount;
}
int main()
{
	int start_col=0;
	int start_row=0;
	int end_col=2;
	int end_row=2;
	int n=mazehunter(start_row,start_col,end_row,end_col);
	cout<<"hahaha"<<n<<endl;
	
	return 0;
}
