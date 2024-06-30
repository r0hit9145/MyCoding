//Multiple inheritance
#include<iostream>
using namespace std;

//A

class A
{
    public:
    int no;
    string name;
};
//B
class B : public A
{
    public:
    string n1;
};

//C->>>> A, B

class C : public A, public B
{
    public:
    void start()
    {
        cout<<"Start function is called :\n"<<endl;
    }
};

int main()
{
    class C obj1;
    cout<<obj1.n1<<endl;
    cout<<obj1.name<<endl;
    cout<<obj1.no<<endl;
}



