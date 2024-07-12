#include<bits/stdc++.h>
using namespace std;
class Base
{
	protected:
		int x,y;
		
		public:
			void getdata()
			{
				cout<<"Enter first number: ";
				cin>>x;
				cout<<"Enter second number: ";
				cin>>y;
				
				
			}
			void showdata()
			{
			    cout<<"sum of Numbers: "<<x+y<<endl;
			}
};
class derived1: public Base
{
	protected:
		int n;
		public:
			void setdata()
			{
				cout<<"Enter a number: "<<endl;
				cin>>n;
			}
			void display()
			{
				showdata();
				cout<<"your Number is: "<<n<<endl;
			}
};
class derived2: public Base
{
	protected:
		int n2;
		public:
			void putdata()
			{
				cout<<"Enter a number for derived2: ";
				cin>>n2;
			}
			void outdata()
			{
				showdata();
				cout<<"Your number for derived2 is: "<<n2<<endl;
			}
};
int main()
{
	derived1 d1;
	derived2 d2;
	
	d1.getdata();
	d1.setdata();
	d1.display();
	
	d2.getdata();
	d2.putdata();
	d2.outdata();
	
	
	return 0;
}

