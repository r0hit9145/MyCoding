//copy constructor 
#include<iostream>
using namespace std;

class Hero
{
    private:
    int a=90;
    public:

    ~ Hero()
    {
        cout<<"Destrcutor is called : "<<endl;
    }

    
    Hero(int a)
    {
        cout<<"Simple constructor called : "<<endl;
        this->a=a;
        cout<<a<<endl;
    }

    // Hero(Hero &obj)
    // {
    //     cout<<"Copy costructor called : "<<endl;
    //     cout<<obj.a<<endl;
    // }   

    //  void fun(){
    //     cout<<a;
    // }

  

    //  ~ Hero()
    // {
    //     cout<<"Destrcutor is called : "<<endl;
    // }

};

int main()
{
    Hero *obj=new Hero(45);
    delete obj;
    // Hero obj1(&obj);

    // obj.fun();

}