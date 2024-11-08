#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter terms.... ";
    cin>>num;
    int a=0,b=1,c;
    for(int i=1; i<=num; i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}