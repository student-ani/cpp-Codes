#include<iostream>
using namespace std;
int main()
{
	int a;
	try
	{
		if (a>0){
			throw 5;
		}
		if (a<0){
			throw 1.5f;
		}
		if (a==0){
			throw 2.0;
		}
	}
	catch(int a)
	{
		cout<<"Its a positive";
    }
    catch(float b)
    {
    	cout<<"Its negative";
	}
	catch(double c)
	{
		cout<<"Its zero";
	}
	return 0;
}
