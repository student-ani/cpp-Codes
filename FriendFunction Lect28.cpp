/*#include<iostream>
using namespace std;

class Y;

class X
{
	int data;
	public:
		void setvalue(){
			int value;
			cout<<"Enter the value of class X = ";
			cin>>value;
			data = value;
		}
	friend void add(X, Y);
};

class Y{
	int num;
	public:
		void setvalue(){
			int value;
			cout<<"Enter the Value of class Y = ";
			cin>>value;
			num = value;
		}
		friend void add(X, Y);
};
void add(X o1, Y o2){
	int o3 = o1.data + o2.num;
	cout <<"The Sum of X and Y objects is "<< o3 <<endl;
}
int main()
{
	X a1;
	Y b1;
	a1.setvalue();
	b1.setvalue();
	add(a1, b1);
	return 0;
}*/

#include<iostream>
using namespace std;

class Y;

class X
{
	int val1;
	public:
		void setvalue(){
			int value;
			cout<<"Enter the value of class X = ";
			cin>>value;
			val1 = value;
		}
		friend void(X&, Y&);
	
	 
};
class Y
{
	int val2;
	public:
		void setvalue(){
		int value;
		cout<<"Enter the value of class Y = ";
		cin>>value;
		val2 = value;
    }
    friend void(&X, &Y);
	
};
void swap(X a, Y b){
	int temp = a;
	      a = b;
	      b = temp;
}
void display(){
	cout<<"The value after swap= ";
}
int main()
{
	X aa;
	aa.setvalue();
	aa.swap();
	aa.display();
	
	Y bb;
	bb.setvalue();
	bb.swap();
	bb.display();
	
	return 0;
	
}




