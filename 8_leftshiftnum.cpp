/*
left shift of num 
1) get the count of digits (store n in n1)
 
n = 1234   expected output : 2341
n1=n = 1234
cnt=0
n     cnt   n=n/10
---------------------------
1234   1    123
123    2    12
12     3    1
1      4    0
0------------------------>

n1=1234
n=n1 = 1234



cnt = 4
x = (int)pow(10,cnt-1)

a = n%x
  =1234%1000 = 234

b = n/x
  = 1234/1000 = 1

newnum = a*10   + b
       = 234*10 + 1
       = 2340   +  1 = 2341
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int n,n1;
	int cnt=0;
	cout<<"\n enter n = ";
	cin>>n;
	n1=n;
	cout<<"\n num = "<<n<<endl;
	while(n>0)
	{
		cnt++;
		n = n/10;
	}
	cout<<"\n count of digits = "<<cnt;
	n= n1;
	
	int rightVal = (int)pow(10,cnt-1);

	int a = n%rightVal;
	int b = n/rightVal;	
	int newnum = a*10   + b;
	cout<<"\nLeft shift of "<<n1<<" = "<<newnum;
	
}

