#include<iostream>
using namespace std;
int main()
{
	int *num1 = new int;
	int *num2 = new int;
	
	cout<<"Enter Value 1st= "<<endl;
	cin>>*num1;
	cout<<"Enter Value 2nd= "<<endl;
	cin>>*num2;
	int sum=*num1+*num2;
	cout<<sum;
	delete num1;
	delete num2;
	
	return 0;
}
