#include<iostream>
using namespace std;
//Operator overloading concept
class Pro
{
    public:
     virtual void speak()
    {
        cout<<"Speaking :"<<endl;
    }
};

class Animal : public Pro
{
    public:
    void speak()
    {
        cout<<"Barking :"<<endl;
    }
};
//return_type class_name :: data_type value= intialization;
//int Pro :: a=34;

int main()
{
    Animal obj;
    Animal obj2= obj;
    Pro *p1;
    p1=&obj2;
    p1->speak();
}








    // Animal a1;
    // a1.first();
    // cout<<a1.a<<" ";
    // cout<<a1.b<<" ";
    // a1.second();
    // Pro ::A obj;
    // obj.first();

