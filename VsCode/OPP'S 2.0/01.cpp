//
// #using nested function in oop's

//during nesting of a function, we don't need
// to call along the its object.
#include<iostream>
using namespace std;

class avatar
{
    int a; int b;
    void check_data(void);
    public:
    void set_data(void);
    // void check_data(void);
    void get_data(void); 
};

//ouside accessing the member variables.

void avatar :: set_data(void)
{
    cout<<"Enter the first number :\n";
    cin>>a;
    cout<<"Enter the second number :\n";
    cin>>b;
}

void avatar :: check_data(void)
{
    cout<<"For checking the inputing data :"<<endl;
}
//nesting of the fuction along with data.
void avatar :: get_data(void)
{
    check_data();
    {
        cout<<"Check_data() is called :"<<endl;
        cout<<a<<endl;
    }
    cout<<"First number is : "<<a<<endl;
    cout<<"Second number is : "<<b<<endl;
}

//fuction main body 
int main()
{
    class avatar g;
    g.set_data();
    //g.check_data();
    g.get_data();
}
