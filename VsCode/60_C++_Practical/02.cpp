//WAp that uses mulit-level inheriance to implement class node, server and device.
//also constructor is overloaded.
#include<iostream>
using namespace std;

class node
{
    public:
    int age;

    node(int d)
    {
        this->age=d;
        cout<<"Node->"<<age<<endl;
    }
};

class Server : public node
{
    public:
    Server(int d): node(d)
    {
        this->age=d;
        cout<<"Server->"<<age<<endl;
    }
    void fun1()
    {
        cout<<age<<endl;
    }
};

class device: public Server
{
    public:
    device(int d): Server(d)
    {
        this->age=d;
        cout<<"Device->"<<age<<endl;
    }
    void fun1()
    {
    cout<<age<<endl;
    }
};

int main()
{
    device obj1(5);

    //device s;
    obj1.fun1();
}