#include<iostream>
using namespace std;


           //Default Argument
           
float moneyRecieved(int currentMoney, float factor = 1.04)
{
	return currentMoney * factor;
}   

int main()
{
	int money=40000;
	cout << "If you have "<<money<<" Rs in your bank A/c, you will receive "<<moneyRecieved(money)<<"Rs after 1 Year"<<endl;
	cout << "For VIP: if you have "<<money<<"Rs in your bank A/c, you will receive "<<moneyRecieved(money, 1.10)<<"Rs after 1 Year.";
	return 0;
}        

/*int product (int a, int b)


    // Static Variable
{
	static int c = 0;    //onr time execute
	c = c+1;    //Next time this function is run, the value of c will be retained
	return a*b+c;
}

int main()
{
	int a, b;
	cout <<"enter the value of a and b: ";
	cin >>a>>b;
	cout <<"The sum is: "<<product(a,b)<<endl;
	cout <<"The sum is: "<<product(a,b)<<endl;
	cout <<"The sum is: "<<product(a,b)<<endl;
	cout <<"The sum is: "<<product(a,b)<<endl;
	cout <<"The sum is: "<<product(a,b)<<endl;
	cout <<"The sum is: "<<product(a,b)<<endl;
	return 0;
}*/

       // InLine Function
/*inline int sum(int a, int b)
{
	return a+b;
}

int main()
{
	int a, b;
	cout <<"enter the value of a and b: ";
	cin >>a>>b;
	cout <<"The sum is: "<<sum(a,b)<<endl;
	cout <<"The sum is: "<<sum(a,b)<<endl;
	cout <<"The sum is: "<<sum(a,b)<<endl;
	cout <<"The sum is: "<<sum(a,b)<<endl;
	cout <<"The sum is: "<<sum(a,b)<<endl;
	cout <<"The sum is: "<<sum(a,b)<<endl;
	return 0;
}*/


        
   
