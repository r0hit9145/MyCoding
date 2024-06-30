//Character vs string ->
//basic concept of the char array --- "\0"
#include<iostream>
using namespace std;

class A
{
    public:
    void chr(char name[])
    {

        cout<<"Your name is :"<<name<<endl;
    }
};

int main()
{
    A obj;
    char name[20];
    cout<<"Enter your name:"<<endl;
    cin>>name;
    name[2]='\0';//part -2
    obj.chr(name);
}