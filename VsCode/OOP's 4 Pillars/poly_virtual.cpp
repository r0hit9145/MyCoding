#include <iostream>
using namespace std;

class base_class
{
public:
    int base = 21;
    // this is called a virtual function
    virtual void display()
    {
        cout << "Hello base_class pointer \n";
    }
};

class Derived_class : public base_class
{
public:
    int derived = 23;
    // void display()
    // {
    //     // int a=34;
    //     // cout << "Hello Derived class pointer\n";
    //     // cout << "once day, you will be successed\n";
    //     // cout<<a;
    // }
};

int main()
{
    // pointer of the base class
    base_class *bptr;
    // an object of the base class
    base_class obj_base;
    // pointer of the derived class
    // an object of the derived class
    Derived_class *dptr;
    Derived_class obj_derived;
    bptr = &obj_derived;
    //bptr->a;
    bptr->display();
}