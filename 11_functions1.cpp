#include<iostream>
using namespace std;
/* functions without parameters and no return value*/
//function prototype declaration
void add();
void sub();
int main()
{
	//function call
	add();
	sub();
}
//definition of function
void add()
{
	int a,b,sum;
	cout<<"\n Enter a and b val = ";
	cin>>a>>b;	
	sum = a+b;
	cout<<"\n Sum = "<<sum;
}
void sub()
{
	int a,b,diff;
	cout<<"\n Enter a and b val = ";
	cin>>a>>b;	
	diff = a-b;
	cout<<"\n diff = "<<diff;
}
