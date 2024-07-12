#include<iostream>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	int i =1;
//	char ch='A';
//	int count =1;
	while(i<=n){
		int j=1;
//		int count = 1;
         char ch='A';
		while(j<=i){
//			char ch='A';
			cout<<ch<<" ";
			ch=ch+1;
//			count=count+1; 
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	return 0;
}
