#include<iostream>
using namespace std;

int sum(int a,int b)
{
	int c = a+b;
	return c;
}



void swap(int a, int b)        //temp a  b
{                              
	int temp = a;              //5   5   3
	a = b;                     //5   3   3
	b = temp;                  //5   3   5
}
int main()
{
	int a = 5;
	int b = 3;
	cout <<"The sum is: "<<sum(a,b);
	return 0;
}
