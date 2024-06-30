//friend function access private member within classses.
#include<iostream>
using namespace std;

//declaration
class Daksh;

class Sidhhi
{
    int a;
    public:
    Sidhhi(int var)
    {
        this->a=var;
    }

    friend void Rohit(Daksh, Sidhhi);
};


class Daksh
{
    private:
    int d;
    public:
    Daksh(int dak)
    {
        this->d=dak;
    }

    friend void Rohit(Daksh, Sidhhi);
};

void Rohit( Daksh d1, Sidhhi s1)
{
    cout<<"Daksh ke pass  hai : "<<d1.d<<endl;
    cout<<"Sidhhi ke pass hai : "<<s1.a<<endl;
}


int main()
{
    Daksh d1(123);
    Sidhhi s1(12);

    Rohit (d1, s1);
}