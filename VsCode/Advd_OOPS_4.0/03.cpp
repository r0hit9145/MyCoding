//copy constructor is called :
#include<iostream>
using namespace std;

class emp
{
    public:
    int roll;
    char b;
    float f;
    //constructor calling.
    emp(int r, char b, float f)
    {
        cout<<"constructor called :"<<endl;
        this->roll= r;
        this->b= b;
        this->f= f;
    }

    //copy constructor calling via pointer 
    emp(emp *p)
    {
        cout<<"Copy constructor called:"<<endl;
        cout<<p->roll<<"\t"<<p->b<<"\t"<<p->f<<endl;
    }
    // copy construcor called via reference
    //  emp(emp &p)
    // {
    //     cout<<"Copy constructor called:"<<endl;
    //     cout<<roll<<"\t"<<b<<"\t"<<f<<endl;
    // }
};

int main()
{
    //constructor called
    emp obj1(23, 'C', 34.33);
    //copy->constructor called
    emp obj2(&obj1);
    //emp obj2(obj1);
}