#include<iostream>
using namespace std;

int main(){


    int age;
	cout<<"Enter your age: "<<endl;
	cin>>age;
	switch(age)
	{
		
	case 18:
	    cout <<"Now you are 18" <<endl;
	    break;
	
	default:
	break;
	} 
	return 0;
}

	
/*	int Total Amnt  = 1330;
	int a,b;
	
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	
	char op;
	cout<<"Enter the operation you want to perform:"<<endl;
	cin>>op;
	
	switch( op ) {
		
		case '+': cout<<(a+b)<<endl;
		break;
		
		case '-': cout<<(a-b)<<endl;
		break;
		
		case '*': cout<<(a*b)<<endl;
		break;
		
		case '/': cout<<(a/b)<<endl;
		break;
		
		case '%': cout<<(a%b)<<endl;
		break;
		
		dafault: cout<<"Enter the valid operation: "<<endl;
	}*/

