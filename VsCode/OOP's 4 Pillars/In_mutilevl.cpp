//multi-levels inheritance
#include<iostream>
using namespace std;
//level-1
class Animal
{
    public:
    int age;
    string name;
    int weight;
};
//level-2
class Dog : public Animal
{
    public:
    string d_n1;
};
//level-3
class Cat : public Dog
{
    public:
    int ct_age;
};

int main()
{
    //Dog class
    class Dog d1;
    cout<<"Dog class is called :\n"<<endl;
    cout<<d1.age<<" "<<d1.name<<" "<<d1.d_n1<<endl;
}
