                 //HYBRID 


/*#include<iostream>
#include<string>
using namespace std;
class student
{
	protected:
		string name;
		int regNo;
		public: student()
		{
			//name = "Rahul ";
			//regNo = 12020;
		}
		void getdetails()
		{
			cout << "Name: ";//<<name<<endl;
			cin>>name;
			cout << "Reg.No: ";//<<regNo<<endl;
			cin>>regNo;
		}	
	
};
class Exam : virtual public student
{
	protected:
		void getExamStatus()
		{
			cout << "Failed "<<endl;
		}
};
class Project : virtual public student
{
	protected:
		void getProjectStatus()
		{
			cout <<"Completed "<<endl;
		}
};
class Result: virtual public Exam, public Project
{
	public:
		void getResult()
		{
			getdetails();
			getExamStatus();
			getProjectStatus();
		}
};
int main()
{
	Result obj1;
	obj1.getResult();
	return 0;
}*/

                            // Default constructor MultiLevel

/*#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout <<"Class A Constructor"<<endl;
		}
		~A()
		{
			cout<<"Class A Destructor"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout << "Class B Constructor"<<endl;
		}
		~B()
		{
		cout << "Class B Destructor"<<endl;
	}
};
class C : public A// public A
{
	public:
		C()
		{
			cout << "Class C Constructor"<<endl;
		}
		~C()
		{
			cout << "Class C Destructor"<<endl;
		}
};

int main()
{
	C obj1;
	return 0;
	
}*/



#include<iostream>
using namespace std;
class A
{
private:
    int x;
    int y;
public:
    //Default constructor
    A()         //No arguments means Default constructor
    {
        x=1;
        y=0;
    }

    //Parameterized constructor
    A(int a,int b)               //obj(1,2)
    {
        x=a;
        y=b;
    }

    //Copy Constructor
    A(A &obj)
    {
       x=obj.x;
       y=obj.y;
    }

    void dispaly()
    {
        cout<<"X= "<<x<<endl;
        cout<<"Y= "<<y<<endl;
    }

   //Destructor
   ~A()
   {
       cout<<"Dstructor called"<<endl;
   }

};
int main()
{
  //  A obj1,obj2;
    A obj3(5,10);         //Constructor calling
  //  obj1.dispaly();
    //obj2.dispaly();

 //   obj3.dispaly();

    A obj4=obj3;          //calling of copy constructor
    obj4.dispaly();
    return 0;

}


