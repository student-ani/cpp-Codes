#include<iostream>
using namespace std;


	class A
	{
		public:
			int a;
			A(int y)
			{
				a=y;
			}
			void getA()
			{
				cout<<a;
			}
		
		
	};
	
	int main()
	{
		A a1(4);
		int a = 10;
		a1 = a;
		return 0;
	}
	
/*	double x = 11.22;
	int result = x+10;
	cout<<result;
	
	return 0;*/
	
/*	int a=10;
	char ch = 'A';
	int result = a+ch;
	cout<<result;
	return 0;
	
}*/
