#include<iostream>
using namespace std;

class A
{
    private:
    int a;
    int b;

    void operator + ()
    {
        cout<<"Mein operator hu:k\n"<<endl;
    }
};

int main()
{
    A obj1;
    obj1.operator +();
}