#include<iostream>
using namespace std;

class Hero
{
    public:
    void speak()
    {
        cout<<"parent class :"<<endl;
    }
};

class Animal : public Hero
{
    public:
    void speak()
    {
        cout<<"Child class :"<<endl;
    }
};

int main()
{
    Hero obj;
    obj.speak();
}

























// #include<iostream>
// using namespace std;

// class Test 
// {
// public:
// void fun()
// {
//     cout<<"Static function is called :"<<endl;
// }
// void fun() 
// {
//     cout<<"Normal function is called :"<<endl;
// } 

// };

// int main()
// {
//  system("cls");
//  Test t;
// // getchar();
// t.fun();
// return 0;
// }





// #include<iostream>
// #include "Heroclass.cpp"
// using namespace std;

// int main()
// { 
//     Hero ram;
//     cout<<ram.level;
// }