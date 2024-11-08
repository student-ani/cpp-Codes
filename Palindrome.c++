#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int rev = 0;
    int dup = num;
    while(num>0)
    {
        int ld = num%10;
        rev = rev*10+ld;
        num = num/10;
    }
    if(dup==rev)
    {
        cout<<"Palindrome.";
    }else{
        cout<<"No Palindrome.";
    }
    return 0;
}