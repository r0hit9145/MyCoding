//using constant in fun or obj
//something an error using outside the class a function.
#include<iostream>
using namespace std;

class demo {
    int x;
    public:
    
    void setdata(int a) 
    {
        x=a;
    }

    void show()
    {
        ++x;
        cout<<x<<endl;
    }
};
int main()
{
    const demo d;
    //an error occured!
    d.setdata(10);
    d.show();
    return 0;
}