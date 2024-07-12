/*#include<iostream>
using namespace std;

int main()
{
	int x = -2;
	cout<<"Before try"<<endl;
	try{
		cout<<"After try"<<endl;
		if (x<0)
		{
			throw x;
			cout<<"After throw"<<endl;
		}
	}
	catch(int x)
	{
		cout<<"Exception Caught"<<endl;
	}
	cout<<"After catch(Will be executed)";
	return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
	try{
		throw 1;
	}
	catch (char *excp){
		cout<< "Caught"<< excp;
	}
/*	catch(...){
		cout<<"Default Exception"<<endl;
	}*/
	return 0;
}
