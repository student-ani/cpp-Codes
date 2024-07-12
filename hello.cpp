#include<iostream>
using namespace std;
int main(){
int a=7;
int b=5;
cout<<"Before swapping :"<<endl;
cout<<"a:"<<a<<" "<<"b:"<<b<<endl;

a=a^b;
b=a^b;
a=a^b;

cout<<"After swapping :";
cout<<"a:"<<a<<" "<<"b:"<<b;
}
