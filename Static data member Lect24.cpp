#include<iostream>
using namespace std;

class Employee{
	int id;
	static int count;
	
	public:
		void setData(void){
			cout<< "Enter Id:";
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"The Employee Id is "<<id<<" and Employee number is "<<count<<endl;
		}
		static void getCount(void)      //static member Function
		{
			cout<<"The value of count is: "<<count<<endl;
		}
};

int Employee::count;
//int Employee::count = 500;

int main()
{
	Employee Aniket, Ayansh, Shagun;
	Aniket.setData();
	Aniket.getData();
	Employee::getCount();       //static function
	
	Ayansh.setData();
	Ayansh.getData();
	Employee::getCount();        //static function
	
	Shagun.setData();
	Shagun.getData();
	Employee::getCount();        //static function
	
	return 0;
	
}
