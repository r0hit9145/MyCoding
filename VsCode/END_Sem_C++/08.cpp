//Static data member  or Static member function.....
#include<iostream>
using namespace std;

class Dm
{
    int a=34;
    static const int b=22;

    public:
    Dm(int x, int y)
    {
        a=x;
        b;
    }

    void show()
    {
        cout<<a<<" "<<b<<endl;
    }

    static void display()
    {
        cout<<b<<endl;
    }
};

int main()
{
    Dm obj1(12, 34), obj2(45, 67);
    obj1.show();
    //without object calling access static function........
    Dm::display();
    return 0;
}
