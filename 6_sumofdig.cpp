/*
n = 3456

3+4+5+6 = 18

rem = 0
sum = 0

        n%10    sum+=rem
n		rem		sum			n=n/10
-----------------------------------------------
3456	6 		0+6=6		345
345		5		6+5=11		34
34		4		11+4=15		3
3		3       15+3=18     0
0====================================================>
x%y = x<y = x
3%10      = 3
*/


#include<iostream>
using namespace std;
int main()
{
	int n ,rem=0,sum=0;
	cout<<"\n enter n = ";
	cin>>n;
	while(n>0)
	{
		rem = n%10;  //(it will store the remainder when u divide n by 10)
		sum = sum+rem;
		//cout<<"\n n = "<<n<<" rem= "<<rem<<" sum = "<<sum;
		n = n/10; //stores int part of quot
	}
	
	cout<<"\n Sum of dig = "<<sum;
}
	
	
	
	
	
	
	
	
