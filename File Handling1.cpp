#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream newFile("C:\\Users\\WIN10\\Desktop\\CPP.txt");
	
	cout<<"File Created...";
	
	//newFile<<"CPP full Course...";
	newFile.close();
	
	return 0;
}
