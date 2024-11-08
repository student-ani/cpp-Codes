#include<bits/stdc++.h>
using namespace std;
bool check_sum(int n)
{
    int ld;
    int sum=0;
    while(n>0)
    {
        ld = n%10;
        sum = sum+ld;
        n=n/10;
    }
    return sum%3==0;
}
int main()
{
    int n;
    cin>>n;
    if (check_sum(n)){
        cout<<"true";
    } else {
        cout<<"false";
    }
    return 0;
}