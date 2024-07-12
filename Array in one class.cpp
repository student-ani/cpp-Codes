//                    1-D Array
/*#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {10,20,30,40,50};
	for(int i=0; i<5; i++) 
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

//                   2-D Array

#include<iostream>
using namespace std;
int main()
{
	int a[2][2],i,j;
	cout<<"Enter Array Elements: ";
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Array Elements: "<<endl;
	for(i=0; i<=1; i++)
	{
		for(j=0; j<=1; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/

//             String
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[]="Aniket ";
	char str2[]="Prakash";
	cout<<"The string is "<<str<<endl;
	int r = strlen(str);
	cout<<"The length of string is "<<r<<endl;
	//cout<<"Reverse of string is "<<strrev(str)<<endl;
	strcat(str,str2);
	cout<<"Full Name is "<<str<<endl;
	strupr(str);
	cout<<"Full Name is "<<str;
	return 0;
}
