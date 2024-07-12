#include<iostream>
using namespace std;


       //volume of Cylinder
int volume(double r, int h){
	return (3.14 * r * r *h);
	
}

      //volume of cuboid
int volume(int a){
	return (a* a* a);
}

      //volume of Rectangular box
int volume(int l, int b, int h){
	return (l* b* h);
}


int main()
{
	cout <<"The Volume of Cylinder is: "<<volume(2,8)<<endl;
	cout <<"The Volume of Cuboid is: "<<volume(5)<<endl;
	cout <<"The Volume of Rectangular Box is: "<<volume(1,5,8)<<endl;
	
	return 0;
}
