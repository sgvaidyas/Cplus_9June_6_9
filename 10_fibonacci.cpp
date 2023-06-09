/*
n = 6
1  2   3  4
-------------------------
0  1   1  2  3  5
      n1  n2 n3
            n1+n2



*/
#include<iostream>
using namespace std;
int main()
{
	int n,n1=0,n2=1,n3,terms;
	cout<<"\n enter n = ";
	cin>>n;
	if(n==1)
		cout<<n1;
	else
	{
		cout<<n1<<"\t"<<n2<<"\t";
		terms=2;
		while(terms<n)
		{
			n3 = n1+n2;
			cout<<n3<<"\t";
			n1=n2;
			n2=n3;
			terms++;			
		}		
	}
}
	
	
	
	
	
	
	
	
	
	
