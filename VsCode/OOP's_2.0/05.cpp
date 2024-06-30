// static variable intialise.
#include<iostream>
using namespace std;

class Hero{
    public:
    static int key;
};

int Hero :: key=43;


int main()
{
    //without creating an object of its class.
    //no doubt that will it not working during created an object of its class.
    cout<<Hero :: key;
    //    or

    Hero h1;

    cout<<endl<<h1.key<<endl;
    cout<<Hero:: key<<endl;
}