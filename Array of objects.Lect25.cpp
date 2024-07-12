/*#include<iostream>
using namespace std;

class Employee{
	int id;
	int salary;
	public:
		void setId(void){
			salary = 172;
			cout<<"Enter employee Id:";
			cin>>id;
		}
		
		void getId(void){
			cout<<"The Id of Employee is:"<<id<<endl;
		}
};

int main()
{
	Employee  vivo[10];  // If in any company max employee then store the data of these employees in a array[]
	for(int i=0; i<10; i++){  // it's run by for loop also OR  
		vivo[i].setId();
		vivo[i].getId();
		
	} 
	
	
/*	Employee Aniket, Ayansh, Reet, Shagun, Chhoti;
	Aniket.setId();
	Aniket.getId();
	
	Ayansh.setId();
	Ayansh.getId();
	
	Reet.setId();
	Reet.getId();
	
	Shagun.setId();
	Shagun.getId();
	
	Chhoti.setId();
	Chhoti.getId();
	
	return 0;
	
	
}*/

#include<iostream>
using namespace std;

class complex{
	int a;
	int b;
	public:
	void setData(int v1, int v2){
		a = v1;
		b = v2;
	}
	
	void setDataBySum(complex o1, complex o2, complex o3){    //o1, and o2 complex class ke objects.
		a = o1.a + o2.a + o3.a;
		b = o1.b + o2.b + o3.b;
	}
	
	void printData(){
		cout<<"Your complex Number is "<<a<<"+"<<b<<"i"<<endl;
	}
};

int main(){
	complex c1, c2, c3, c4;
	
	c1.setData(1, 2);
	c1.printData();
	
	c2.setData(4, 5);
	c2.printData();
	
	c3.setData(7, 8);
	c3.printData();
	
	c4.setDataBySum(c1, c2, c3);
	c4.printData();
	
	return 0;
	
	
}
