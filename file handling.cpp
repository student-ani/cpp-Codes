#include<iostream>
//#include<fstream>
using namespace std;


//For read- ifstream in(filename.txt);
//string st;    string k andr file ke data lane k liye.
//in>>st;

//For write- ofstream out(filename.txt);
//string st = "kuchh v";
//out<<st;


/*int main()
{
	//connecting our file with vout stream
	ofstream vout("getline.txt");
	
	//creating a name string and filling it with the string entered by user.
	cout<<"Enter kuchh v";
	string name;
	cin>>name;
	
	//writing a string to the file
	
	vout<<"My name is " + name;
	vout.close();
	
	
	
	ifstream vin("getline.txt");
	string content;
	vin>>content;
	cout<<"The new content is: "<<content;
	
	
	
	
	return 0;
}*/

class A
{
private:
	int x;
	int y;
		
public:
	A()
	{
		x=1;
		y=0;
	}
	void display()
	{
		cout<<"X= "<<x<<endl;
		cout<<"Y= "<<y<<endl;
	}
	~A()
	{
		cout<<"Destructor called"<<endl;
	}
};
int main()
{
	A obj;
	obj.display();
	return 0;
}



