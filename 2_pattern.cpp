/*
n=5
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9 
*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"\n enter n = ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n+i;j++)
		{
			cout<<j<<"\t";
		}
		cout<<"\n";
	}
}

