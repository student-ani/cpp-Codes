/*#include<iostream>
using namespace std;
int main()
{
	int *num1 = new int;
	int *num2 = new int;
	
	cout<<"Enter Value 1st= "<<endl;
	cin>>*num1;
	cout<<"Enter Value 2nd= "<<endl;
	cin>>*num2;
	int sum=*num1+*num2;
	cout<<sum;
	delete num1;
	delete num2;
	
	return 0;
}*/

/*#include<iostream>
using namespace std;
class Add
{
	public:
		int *num1;
		int *num2;
		Add()
		{
			num1 = new int(5);
			num2 = new int(10);	
		}
		~Add()
		{
			delete num1;
			delete num2;
		}
		void calculate()
		{
			int sum = *num1 + *num2;
			cout<<sum;
		}
};
int main()
{
	Add a1;
	a1.calculate();
	
	return 0;
}*/

#include<iostream>
using namespace std;
class Addition
{
	public:
		int num1,num2;
		Addition()
		{
			num = 10;
			num =20;
		}
		void calculate(int x, int y)
		{
			num1 =x;
			num2 =y;
			int sum = num1+num2;
			cout<<sum<<endl;
		}
};
int main()
{
	Addition *a1= new Addtition
}
