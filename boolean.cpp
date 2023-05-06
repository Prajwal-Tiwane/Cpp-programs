#include<iostream>
using namespace std;

bool CheckEvent(int No)
{
    if((No % 2)==0)
{
    return true;
}   
else
{
    return false;
}
}

int main()
{
    int Value = 0;
    bool bRet = false;
    cout<<"Enter number\n";
    cin>>Value;

    bRet = CheckEvent(Value);

    if(bRet == true)
    {
        cout<<"Is is even number\n";
    }
    else
    {
        cout<<"It is odd number\n";
    }

    return 0;
}