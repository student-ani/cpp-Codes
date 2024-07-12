#include<iostream>
using namespace std;

class addition
{
	private:
		int a,b,c;
	
		public:
			void getdata()
			{
				cout<<"Enter the value for a: ";
				cin>>a;
		        cout<<"Enter the value for b: ";
		        cin>>b;
		        cout<<"Enter the value for c: ";
		        cin>>c;
			} 
			void putdata()
			{
				cout<<"The sum of these numbers is: "<<a+b+c<<endl;
			}
};

int main()
{
	addition aa;
	aa.getdata();
	aa.putdata();
	
	return 0;
}






#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class finalPrice{
public:
   float finalp(){
    float price;
    cout<<"What is the price of food"<<endl;
    cin>>price;
    return price;
    }
};
class finalTax{
public:
   float finalt(){
    float tax;
    cout<<"What is the tax on the food"<<endl;
    cin>>tax;
    return tax;

}
};
class finalTip{
public:
   float final_t(){
    float tip;
    cout<<"What is the tip"<<endl;
    cin>>tip;
    return tip;

    }
};
class totalBill:public finalPrice,public finalTax,public finalTip{
public:
    int total,price,tip,tax;
   void finalBill(){
    total=price + tip + tax;
    cout<<total;
   }
};
int main(){
totalBill tot;
tot.price=tot.finalp();
tot.tax=tot.finalt();
tot.tip=tot.final_t();
tot.finalBill();
}
