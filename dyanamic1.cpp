#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        int No2;

    public:
        Arithematic()
        {
            No1 = 0;
            No2 = 0;
        }
        Arithematic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }
        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
        int Substraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }
};

int main()
{
    cout<<"Inside main"<<"\n";
    Demo obj1;
    Demo obj2(11,21);

    Demo *p = new Demo();
    Demo *q = new Demo(11,21);

    delete p;
    delete q;

    cout<<"End of main"<<"\n";

    return 0;
}