#include <iostream>
using namespace std;


int main()
{
	char ch = 'A';
	int n = 1;
	switch( n ){
		case 1: cout<<"First: "<<endl;
		break;
		
		case 2: switch(ch){
			case 1: cout<<"The character is: "<<endl;
			break;
		}
		//cout<<"Second: "<<endl;
		break;
		
		default: cout<<"its a default case: "<<endl;
	}
	
	
	/*int n = 1;
	switch( n ){
		case 1: cout<<"First: "<<endl;
		break;
		
		case 2: cout<<"Second: "<<endl;
		break;
		
		default: cout<<"its a default case: "<<endl;
	}*/
	
	cout<<endl;
	return 0;
}
