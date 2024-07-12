#include<iostream>
using namespace std;

int main(){
	
	int Marks[5];
	Marks[0]=10;
	Marks[1]=20;
	Marks[2]=30;
	Marks[3]=40;
	Marks[4]=50;
	
//	cout<<Marks[3];  

    int length = sizeof(Marks);
    cout<<length;
    for(int i=0;i<length;i++)
    
	return 0;
}

