/*
n = 12345

rev = 0
         n%10 	rev*10+rem
n        rem		rev			n=n/10
---------------------------------------------------------
12345     5		0+5=5			1234
1234      4		5*10+4=54		123
123		  3     54*10+3=543		12
12		  2		543*10+2=542    1
1         1     5432*10+1=54321 0
0=========================================>
*/
#include<iostream>
using namespace std;
int main()
{
	int n ,rem=0,rev=0;
	cout<<"\n enter n = ";
	cin>>n;
	while(n>0)
	{
		rem = n%10;  //(it will store the remainder when u divide n by 10)
		rev = (rev*10)+rem;
		//cout<<"\n n = "<<n<<" rem= "<<rem<<" sum = "<<sum;
		n = n/10; //stores int part of quot
	}
	
	cout<<"\n Reverse = "<<rev;
}

