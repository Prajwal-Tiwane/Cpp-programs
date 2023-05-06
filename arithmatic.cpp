#include<iostream>
using namespace std;

class Arithmatic
{
    private:
        int No1;
        int No2;

    public:
        Arithmatic()
        {
            No1 = 0;
            No2 = 0;
        }
        Arithmatic(int A, int B)
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
    Arithmatic obj1(10,7);
    int Ret = 0;

    Ret = obj1.Addition();

    return 0;


//every c++ program gets internally converted into c program