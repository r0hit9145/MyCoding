#include<iostream>
using namespace std;

class A
{
    public:
    void sayHello()
    {
        int a=34;
        cout<<"Parent class"<<endl;
    }
};

class Animal : public A
{
    public:
    // void sayHello()
    // {
    //     cout<<"child class"<<endl;
    // }
};

int main()
{
    Animal obj1;
    obj1.sayHello();
    return 0;
}