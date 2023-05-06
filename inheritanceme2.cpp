#include<iostream>
using namespace std;

//Parent class
class Demo
{
    public:
        int A,B;

        Demo()
        {
            cout<<"Inside Demo Constructor"<<"\n";
        }
        ~Demo()
        {
            cout<<"Inside Demo destructor"<<"\n";
        }
        void fun()
        {
            cout<<"Inside fun of Demo"<<"\n";
        }
};
//Child class
class Hello : public Demo   //class Hello extends Demo
{
    public :
        int X,Y;

        Hello()
        {
            X = 51;
            Y = 101;
            cout<<"Inside Hello Constructor"<<"\n";
        }
        ~Hello()
        {
            cout<<"Inside Hello destructor"<<"\n";
        }
        void gun()
        {
            cout<<"Inside gun of Hello"<<"\n";
        }
};

class PPA: public Demo

int main()
{
    Hello hobj;

    return 0;
}