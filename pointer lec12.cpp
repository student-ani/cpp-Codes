#include<iostream>
using namespace std;
int main()
{
	int a = 4;
	int *b = &a;
	
	// & ---> (address of) operator
	cout << "Address of a is : "<<b <<endl;
	cout << "Address of a is : "<<&a <<endl;
	
	// * ---> (value at) dereference operator
	cout << "The value at address b is :"<<*b <<endl;
	
	//Pointer to pointer
	int **c = &b;
	cout << "The address of b is : "<<&b <<endl;
	cout << "The address of b is : "<<c <<endl;
	cout << "The value at address c is : "<<*c <<endl;
	cout << "The value at address value at(value at(address(c)) is : "<<**c <<endl;
	
	return 0;
}
