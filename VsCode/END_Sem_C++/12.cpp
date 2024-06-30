//Does overloading work with Inheritance?------- Very important concept??

//NOOOOOOOOOOOOOOOOOOOOOOOOOOOO
#include<iostream>
using namespace std;

class A 
{
    public:

    int f(int a)
    {
        cout<<"f(int)--> "<<endl;
        return a*3;
    }
};

class B : public A
{
    public:

    double f(double a)
    {
        cout<<"f(double)--> "<<endl;
        return a*4.0;
    }
};

int main()
{
    B obj;
    cout<<obj.f(12)<<endl;//double
    cout<<obj.f(2.1);//double
}