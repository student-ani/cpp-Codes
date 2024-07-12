#include<iostream>
#include<string>
using namespace std;

class binary{
	string s;
	void chek_bin(void);
	public:
		void read(void);
		//void chek_bin(void);
		void ones_compliment(void);
		void display(void);
};
void binary::read(void){
	cout <<"Enter a binary Number: ";
	cin>>s;
}
void binary::chek_bin(void){
	for (int i=0; i<s.length();i++)
	{
		if (s.at(i)!='0'&& s.at(i)!='1'){
			cout<<"Incorrect Binary Format."<<endl;
			exit (0);
		}
		/*else{
			cout<<"Correct Binary Format."<<endl;
			exit (0);
		}*/
	}
}

void binary::ones_compliment(void)
{
	for (int i=0; i<s.length();i++)
	{
		if (s.at(i) == '0')
		{
			s.at(i)='1'; 
		}
		else
		{
			s.at(i)='0';
		}
	}
}

void binary::display(void)
{
	cout<<"Displaying your Binary number: "<<endl;
	for (int i=0; i<s.length(); i++)
	{
		cout<<s.at(i);
	}
	cout<<endl;
}

int main()
{
	binary b;
	b.read();
//	b.chek_bin();
	b.display();
	b.ones_compliment();
	b.display();
	
	
	return 0;
	
}
