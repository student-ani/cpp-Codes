/*#include<iostream>
using namespace std;
class Base;
int main(){
    Base myobject(20);
    private:
    int value;
    public:
    Base(int v):value(v)
    {
        cout << "value is" << value;
    }
}*/

#include<iostream>
using namespace std;

class class1
{
    int x;
    int y;
    public:
    void setvalues()
    {
        x=10;
        y=20;
    }
    void getvalues()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
class class2
{
    public:
    class1 c1;
    void print()
    {
        c1.setvalues();
        c1.getvalues();
    }
};
int main()
{
    class2 c2;
    c2.print();


    return 0;
}

