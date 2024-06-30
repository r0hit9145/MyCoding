// shallow or deep copy- pending.

#include<iostream>
using namespace std;

class bike {
    public:
    int cc=125;
    char name[10]="Glamour";
    int level=2;

    bike()
{
    cout<<"inside the constructor called :"<<endl;
    cout<<"[ "<<cc<<" "<< name<< " "<<level<<" ]";
    cout<<"[ "<<cc<<" "<< name<< " "<<level<<" ]";

}
};



int main()
{
    bike b1;
    b1.cc;
    b1.name;
    b1.level;
    //b1.name[0]="A";
    bike b2(b1);
}