#include<iostream>
using namespace std;

class complex{
	int a;
	int b;
	public:
		void setData(int n1, int n2){
			a = n1;
			b = n2;
		}
		friend complex sumComplex(complex o1, complex o2);
		void printData(){
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};

complex sumComplex(complex o1, complex o2){
	complex o3;
	o3.setData((o1.a + o2.a),(o1.b+ o2.b));
	return o3;
}
int main()
{
	complex c1,c2,sum;
	c1.setData(1, 4);
	c1.printData();
	
	c2.setData(5, 7);
	c2.printData();
	
	sum = sumComplex(c1,c2);
	sum.printData();
	
	return 0;
}
