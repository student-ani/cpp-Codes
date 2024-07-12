#include<iostream>
using namespace std;
int main()
{
	cout<<"Execution starting....!"<<endl;
	int a,b,c;
	cout<<"Enter number a: ";
	cin>>a;
	cout<<"Enter number b: ";
	cin>>b;
	try
	{
		if(b==0)
		throw b;
		c=b/a;
		cout<<"Result is: "<<c<<endl;
	}
	catch(int x)
	{
		cout<<"can't devide by "<<x<<endl;
	}
	cout<<"Execution Ended....!"<<endl;
	return 0;
}
