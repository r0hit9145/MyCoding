//c++-- friend function

#include<iostream>
using namespace std;

class Hero
{
    private:
    int a=12;
    public:
    Hero(int a): a(a)
    {
        cout<<a<<endl;
    }
   

};

int main()
{
    int a=34;
    Hero obj(a);
    //obj.fun1(a);
}
