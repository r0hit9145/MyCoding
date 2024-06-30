//What is the macros in c++
// it's a preprocessor directive that define throughout the program
#include<iostream>
using namespace std;

#define PI 3.14

#define square(r) ((r)*(r))

int main()
{
    int r;
    cout<<"Enter the number r : "<<endl;
    cin>>r;

    double area= PI * square(r);
    // cout<<PI<<endl;
    // cout<<PI<<endl;
    // float a=PI;
    // cout<<a<<endl;
    cout<<area<<endl;
    //cout<<typedef(a)<<endl;
}