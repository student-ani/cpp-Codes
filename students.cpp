#include<bits/stdc++.h>
using namespace std;

class student
{
	public:
		string name;
		int rollno;
		float marks;
		void getdata()
		{
			cout<<"Enter the details of student: "<<endl;
			cout<<"Provide student Name: ";
			cin>>name;
			cout<<"Provide student roll No: ";
			cin>>rollno;
			cout<<"Enter his Marks: ";
			cin>>marks;
		}
		void putdata()
		{
			cout<<"Students Details are :-"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Roll No is: "<<rollno<<endl;
			cout<<"Marks is: "<<marks<<endl;
		}
			
};

int main()
{
	student student1, student2, student3;
	student1.getdata();
	student2.getdata();
	student3.getdata();
	
	// Details
	student1.putdata();
	student2.putdata();
	student3.putdata();
	
	return 0;
}
