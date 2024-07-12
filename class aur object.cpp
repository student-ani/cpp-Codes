/*#include<iostream>
using namespace std;
class Person
{
	private:
		int run;
		string msg;
		public:
			void play()
			{
				run=45;
				cout<<"Today i scored "<<run<<" runs"<<endl;
			}
			void walk()
			{
				msg="Today i walked 3km ";
				cout<<msg;
			}
};
int main()
{
	Person p1;
	p1.play();
	p1.walk();
	
	return 0;
}*/

                    // Default Constructor
/*#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A()  // default
		{
		    a=10; b=20;
		    cout<<a<<" "<<b<<endl;
	    }
};
int main()
{
	A obj;
	
	return 0;
}

       // parametrized constructor 

#include<iostream>
using namespace std;
class S
{
	public:
	S(int a)
	{
		cout<<"Hey "<<a;
	}
};
int main()
{
	S obj=S(143);
	return 0;
}*/

                    //copy constructor
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(int a, int b)    //parameterized
	{
		x=a;  y=b;
		cout<<x<<" "<<y<<endl;
	}
	A(A &ref)         //copy
	{
		x=ref.x;
		y=ref.y;
		cout<<x<<" "<<y<<endl;
	}
		
};
int main()
{
	A obj(20,30);
	A obj2=obj;
	return 0;
}
                  
   
