#include<iostream>
#include<fstream>
using namespace std;

class Product{
	public:
		string ProductName;
		int Quantity;
		float Price;
		
		void setProduct(){
			cout<<"Enter ProductName "<<endl;
			cin>>ProductName;
			cout<<"Enter Quantity "<<endl;
			cin>>Quantity;
			cout<<"Enter Price "<<endl;
			cin>>Price;
		}
		void getProduct(){
		cout<<ProductName<<Quantity<<Price<<endl;
		}
};
		int main()
		{
			Product P1;
			ofstream fout;
			fout.open("Product.dat ",ios::app);
			P1.setProduct();
			fout.write((char *)&P1, sizeof(P1));
			fout.close();
			cout<<"Product Added "<<endl;
	    };
			

