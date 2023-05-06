#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo()      // default constructor
        {
            No1 = 0;
            No2 = 0;
        }

        void fun()
        {
            cout<<"Inside fun\n";
        
        }    
        void gun()
        {
            cout<<"Inside gun\n";
        }
};

int main()
{
    cout<<"Inside main\n";

     Demo obj1;

    cout<<"Value of No1 from obje1 is : "<<obj1.No1<<"\n";
    cout<<"Value of No1 from obje2 is : "<<obj1.No2<<"\n";

return 0;
}