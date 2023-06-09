/*
n = 4

1*2*3+*4 = 24
prod = 1
i<=4
i  i<=n  prod=prod*i  i++
------------------------
1   T       1*1=1    2
2   T       1*2=2    3
3   T       2*3=6    4
4   T       6*4=24   5
5  F--------------------------------
*/

#include<iostream>
using namespace std;
int main()
{
	int n , i,prod=1;
	cout<<"\n enter n = ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		prod=prod*i;
	}
	cout<<"\n (Factorial)Prod of n natural num = "<<prod;
}


