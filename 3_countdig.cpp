/*
n = 988764
=========================
count num of dig
===========================
cnt = 0

n        cnt++   n=n/10
----------------------------
988764    1       98876
98876     2       9887
9887      3       988
988		  4       98
98        5       9
9         6       0
0=====================================>*/
#include<iostream>
using namespace std;
int main()
{
	long long int n;
	int cnt=0;
	cout<<"\n enter n = ";
	cin>>n;
	cout<<"\n num = "<<n<<endl;
	while(n>0)
	{
		cnt++;
		n = n/10;
	}
	cout<<"\n count of digits = "<<cnt;
}






