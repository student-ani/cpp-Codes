#include<iostream>
using namespace std;

int sum(int a, int b)
{                         //a nd b are formal parameters
	int c = a+b;
	return c;
}
int main()
{
	int num1, num2;
	cout<< "Put the value of num1: ";
	cin>>num1;           //num1 and num2 are actual parameters
	cout<< "Put the value of num2: ";
	cin>>num2;
	cout<<"The Sum is: "<<sum(num1, num2);
	
	
	return 0;
}
