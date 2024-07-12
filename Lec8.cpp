          // ******** Constant keyword use********



#include<iostream>
using namespace std;
int main()
{
	const float a = 3.14;                       //const is never change.
	cout<<"The value of a was:- "<<a<<endl;
	a = 3.56;
	cout<<"The value of a is:- "<<a<<endl;     
	return 0;
}
