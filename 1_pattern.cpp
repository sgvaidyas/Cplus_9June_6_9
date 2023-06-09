/*
n=6

1 2 3 4 5 6
5 4 3 2 1
1 2 3 4
3 2 1 
1 2
1
*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"\n enter n = ";
	cin>>n;
	for(i=n ; i>=1 ; i--)
	{
		if(i%2==0)
		{	
			for(j=1;j<=i;j++)
				cout<<j<<"\t";
		}
		else
		{
			for(j=i;j>=1;j--)
				cout<<j<<"\t";
		}
		cout<<"\n";
	}
}

