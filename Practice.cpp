#include<iostream>
using namespace std;
void swap(int*x, int*y)
{
	void setvalue();
	cout<<"The value of X is: ";
	cout<<"The value of Y is: ";
	cin>>x>>y;
	int swap;
	swap = *x;
	*x = *y;
	*y = swap;
}
int main()
{
	swap(&x,&y);
	cout<<"The value of X after swap: ";
	cout<<"The value of Y after swap: ";
	return 0;
}
