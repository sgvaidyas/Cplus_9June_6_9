/*
n = 6

1+2+3+4+5+6 = 21

sum=0
   i<=6
i  i<=n  sum=sum+i  i++
------------------------
1   T       0+1=1    2
2   T       1+2=3    3
3   T       3+3=6    4
4   T       6+4=10   5
5   T      10+5=15   6
6   T      15+6=21   7
7  F--------------------------------
*/

#include<iostream>
using namespace std;
int main()
{
	int n , i,sum=0;
	cout<<"\n enter n = ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"\n Sum of n natural num = "<<sum;
}


