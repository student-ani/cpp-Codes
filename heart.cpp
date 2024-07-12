#include<bits/stdc++.h>
using namespace std;

int main()
{
/*	char heart = 3;
	cout<<"Heart "<<heart<<endl;*/

int n,row,col;
n = 6;
for(row=0;row<n;row++)
{
  for(col=0;col<n+1;col++)
     if ((row==0 && col%3!=0) || (row==1 && col%3==0) || (row-col==2) || (row+col==8))
          cout<<("*");
        else
          cout<<(" ");

    cout<<endl;

}
  return 0;
}
