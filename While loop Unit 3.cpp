#include<iostream>
using namespace std;
int main(){
	
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
/*	int i = 1;
	while(i<=n){     for print 1 to n numbers
		cout<<i<<" ";
		i=i+1;
	}
	
	int i = 1;       for sum of natural no.s
	int sum = 0;
	while (i<=n) {
	sum = sum+i;
	i = i+1;
	}
	cout<<"Value of sum: "<<sum<<endl;
	
	int i = 2;    sum of even numbers
	int sum = 0;
	while (i<=n) {
		sum=sum+i;
		i=i+2;
	}
	cout<<"Value of Even Sum: "<<sum<<endl;
	
	
	int i=1;     sum of n prime numbers
	int sum =0;
	while(i<=n){
	sum=sum+i;
	i=i+2;	
	}
	cout<<"Value of Even Sum: "<<sum<<endl;*/

int i=2;
while(i<n){
	if(n%i==0){
		cout<<"not prime:"<<endl;
	}
	i=i+1;
}
return 0;
}
