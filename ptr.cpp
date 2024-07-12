#include<iostream>
using namespace std;

int main(){
	int x=10;
	int*y=&x;
	*y=20;
	cout<<&x<<endl;
	cout<<&ptr;
	return 0;
}
