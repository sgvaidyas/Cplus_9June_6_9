#include<iostream>
using namespace std;
/* functions with parameters and no return  value*/
//function prototype declaration
void add(int ,int );
void sub(int ,int );
int main()
{
	int a,b;
	cout<<"\n Enter a and b val = ";
	cin>>a>>b;	
	//function call
	add(a,b);
	sub(a,b);
}
//definition of function
void add(int a,int b)
{
	int sum = a+b;
	cout<<"\n Sum = "<<sum;
}
void sub(int a,int b)
{	
	int diff = a-b;
	cout<<"\n diff = "<<diff;
}
