#include<iostream>
using namespace std;

int main()
{
	
    int marks[] = {22, 35, 42, 51, 47};
	int mathmarks[] = {378, 412, 524, 455, 236};
	       //While loop:-
	//int i =0;
/*	while(i<4)
	{
	cout << "The value of marks :"<<marks[i]<<endl;	
	i= i+1;
    }
	cout <<endl;*/
	
	//for loop:-
	
/*	for (int i = 0; i< 4; i++)
	{
		cout << "The value of marks :"<<marks[i]<<endl;
	}*/
	int* p = marks;
	cout << "The value of marks[0] is: "<<*p<<endl;
	cout << "The value of marks[1] is: "<<*(p+1)<<endl;
	cout << "The value of marks[2] is: "<<*(p+2)<<endl;
	cout << "The value of marks[3] is: "<<*(p+3)<<endl;
	cout << "The value of marks[4] is: "<<*(p+4)<<endl;
	cout << "The value of mark is "<<*p++<<endl;
	cout << "The value of marks is"<<*++p<<endl;
	cout << "These are marks: "<<endl;
    cout << marks[0] <<endl;
    cout << marks[1] <<endl;
    cout << marks[2] <<endl;
    cout << marks[3] <<endl;
    cout << marks[4] <<endl;
    cout << "These are math marks: "<<endl;
    marks[3]= 852;
    cout << mathmarks[0] <<endl;
    cout << mathmarks[1] <<endl;
    cout << mathmarks[2] <<endl;
    cout << mathmarks[3] <<endl;
    cout << mathmarks[4] <<endl;
    
	return 0;
}
