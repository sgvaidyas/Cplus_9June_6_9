#include<iostream>
using namespace std;
/* functions with parameters and no return  value*/
//function prototype declaration
int add(int ,int );
int sub(int ,int );
int main()
{
	int a,b;
	cout<<"\n Enter a and b val = ";
	cin>>a>>b;	
	//function call
	int sum = add(a,b);
	int diff= sub(a,b);
	cout<<"\n SUM = "<<sum<<"\n Diff = "<<diff<<endl;
}
//definition of function
int add(int x,int y)
{
	return x+y;
}
int sub(int a,int b)
{	
	return a-b;
}
