                        // pointer
/*#include<iostream>
using namespace std;
int main()
{
	int *p;         //pointer
	int a=10;
	p=&a;         //a ka address p me store
	cout<<p<<endl;//a ka address print
	cout<<*p;     //a ka value print
	return 0;
}


                       // structure and union
#include<iostream>
using namespace std;
struct stu
{
	int marks;          // int 4bytes
	float avg;          // float 4bytes
	double salary;      // double 8bytes    (4+4+8=16bytes)
};
union stu2
{
	int marks;
	float avg;
	double salary;      // biggest member size double 8bytes
};
int main()
{
	struct stu s;
	cout<<"Structure size= "<<sizeof(s)<<endl;
	union stu2 s2;
	cout<<"Union size= "<<sizeof(s2)<<endl;
	return 0;
}*/

#include<iostream>
using namespace std;
struct stu
{
	int roll;          
	char name[20];         
	float marks;     
};

int main()
{
	struct stu s;
	cout<<"Enter Student rollNo: ";
	cin>>s.roll;
	cout<<"Enter Student Name: ";
	cin>>s.name;
	cout<<"Enter Student Marks: ";
	cin>>s.marks;
	
	cout<<"Candidate Name is: "<<s.name<<endl;
	cout<<"Candidate rollNumber is: "<<s.roll<<endl;
	cout<<"Candidate marks is: "<<s.marks<<endl;
	return 0;
}

