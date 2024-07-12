

                   /* BINARY TO DECIMAL*/

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int n;
    cout<<"Put the value for n: ";
    cin>>n;
    int i=1;
    int ans=0;
    
    while(n != 0){
      int digit = n % 10;
        ans = (digit * i) +ans;
    n=n/10;
    i++;
    }
    cout << "Decimal Representation: "<<ans<<endl;
    return 0;
}




/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    int decimalValue = 0;
    int base = 1; // Initialize base as 2^0

    while (n != 0) {
        int digit = n % 10;
        decimalValue += digit * base;
        n = n / 10;
        base *= 2; // Increase the base by a power of 2
    }

    cout << "Decimal Representation: " << decimalValue << endl;
    return 0;
}*/




     //FOR DECIMAL TO BINARY//
/*#include<iostream>
#include<cmath>
using namespace std;


int main()
{
    int n;
    cout<<"Put the value for n: ";
    cin>>n;
    int i=0;
    int ans=0;
    
    while(n != 0){
       int bit = n % 2;
        ans = (bit * pow(10, i))+ ans ;
        n = n /2;
        i++;
    }
    cout << "Binary representation: " << ans << endl;
    return 0;
}*/

/*#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    int i = 0;
    int ans = 0;
    
    while (n != 0) {
        int bit = n % 2; // Get the remainder when divided by 2
        ans += bit * pow(10, i);
        n = n / 2; // Integer division by 2
        i++;
    }
    
    cout << "Binary representation: " << ans << endl;
    return 0;
}*/

