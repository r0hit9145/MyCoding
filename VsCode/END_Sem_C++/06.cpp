#include<iostream>
#include<stdio.h>
using namespace std;

class Hero
{
    private:
    int a=56;
    public:
    void func1()
    {
        auto b="rohit is good";
        cout<<"Funtion is called : "<<endl;
        cout<<"\n"<<b<<sizeof(b)<<endl;
    }
};

int main()
{
    Hero obj;
    obj.func1();
}