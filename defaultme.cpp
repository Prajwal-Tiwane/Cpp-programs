#include<iostream>
using namespace std;

namespace Marvellous
{
    class Demo
    {
    public:
        int A;
        int B;

        Demo(int i=10, int j=20)
        {
            A = i;
            B = j;
        }
    };
}

int main()
{
    Marvellous:: Demo obj1;
    
     return 0;
}