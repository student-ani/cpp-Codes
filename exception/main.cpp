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
/*// function template
#include<iostream>
using namespace std;
template<class A>
void getsum(A num[5])
{A sum=0;
for(int i=0; i<5; i++)
{
    sum=sum+num[i];
}
cout<<sum;
}
int main()
{
    int n[5]={1,2,3,4,5};
    getsum(n);
    return 0;
}*/
// class template
#include<iostream>
using  namespace std;

