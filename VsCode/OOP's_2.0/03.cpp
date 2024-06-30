//copy constructor and pass by reference
#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:

    int age;
    //copy constructor and pass by reference
    Hero (Hero& int a)
    {
        this->age= a.age;
        cout<<"Copy constructor called :"<<age;
        this->age= a.age;

    }
};


int main()
{
    //Normally 
    Hero ram(10);
    //constructor of copy :
    Hero shyam(ram);
}