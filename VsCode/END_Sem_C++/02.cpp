#include<iostream>
using namespace std;

class A
{
    private:
    int private_var=10;
    int protected_var=99;

    //public:

    friend class B;
};

class B
{
    public:
    B(A obj)
    {
        cout<<obj.protected_var<<endl;
    }
};


int main()
{
    A obj;
    B obj1(obj);
}