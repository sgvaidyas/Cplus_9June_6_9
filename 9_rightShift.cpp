/*
left shift of num 
1) get the count of digits (store n in n1)
 
n = 12345   expected output : 51234
n1=n = 12345
cnt=0
n     cnt   n=n/10
---------------------------
12345   1    1234
1234    2    123
123     3    12
12      4    1
1		5	0
0------------------------>

n1=12345
n=n1 = 12345



n = 12345      newnum = 51234

cnt = 5

a = n/10
  = 12345/10 = 1234

b = n%10
  = 12345%10 = 5

rightval = (int)pow(10,cnt-1)
newnum = b*rightval + a
       = 5*10000  + 1234
       = 50000 +1234 = 51234
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
	int a = n/10;
	int b = n%10;	
	int newnum =b*rightVal + a;
	cout<<"\n Right shift of "<<n1<<" = "<<newnum;
	
}

