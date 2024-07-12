#include<iostream>
using namespace std;

/*class addition

	int a,b; 
	
	public:
		void getdata()
		{
			cout<<"enter two numbers :";
			cin>>a>>b;
		}
		void putdata()
		{
			cout<<"addition: "<<a+b<< endl;
			
		}
	
};
int main()
{
	addition aa;
	aa.getdata();
	aa.putdata();
	
	return 0;	
	
	
}*/


class addition{

float a,b;

public:
	void getdata()
	{
		cout<<"enter first number :";
		cin>>a;
		cout<<"enter second number :";
		cin>>b;
	}
	
	void putdata()
	{
		cout<<"the diffrence of the two numbers is :"<<a-b<<endl;
		
	}
};

int main()
{

addition aa;
aa.getdata();
aa.putdata();

return 0;
}



