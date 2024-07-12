#include<iostream>
using namespace std;
 int main()
 
 {
 	int a[4]{11,22,33,44};
 	cout<<"address of first element of an array :"<<&a[0]<<endl;
 	int *ptr=&a[2];
 	cout<<"address of pointer :"<<&ptr<<endl;
 	cout<<"address of first element of an array :"<<ptr<<endl;
 	cout<<"value of last element in array: "<<*ptr<<endl;
 	ptr--;
 	cout<<"after decrementing address of second element of an array: "<<ptr<<endl;
 	cout<<"after decrementing second element of an array: "<<*ptr<<endl;
 	return 0;
 }
