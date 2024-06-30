//friend class- 01
/*
this is only benifit only access private,protected
*/


#include<iostream>
using namespace std;
//normal class declaring
class A
{
    private:
    int first=23;
    protected:
    int second=34;
    public:
    // A()
    // {
    //     first=23;
    //     second=33;
    // }
    //friend class declaration.
    friend class GFG;

};

class GFG
{
    //definition of friend function
    public:
    void display(A t)
    {
        cout<<"My first number is: "<<t.first;
        cout<<"My second number is: "<<t.second;
    }
};

int main()
{
    //class A constructor- static
    A obj;
    //dynamic constructor- static
    //A *obj= new A;
    //class  GFG
    GFG g1;
    g1.display(obj);
}