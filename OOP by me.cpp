//class = charcterictcs + behaviour
//class = Data + function
#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        void fun()
        {
            cout<<"Inside fun\n";
        }
};

    int main()
{
    Demo obj1;
    Demo obj2;

    cout<<"size of object : "<<sizeof(obj1)<<"\n";
    
    obj1.No1 = 10;
    obj1.No2 = 20;

    obj2.No1 = 30;
    obj2.No2 = 40;

    obj1.fun();
    obj2.fun();

    cout<<obj1.No2<<"\n";

    return 0;
}