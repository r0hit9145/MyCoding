/*write a program to print -ve,+ve and 0 using 
if else condition via user input---->
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number :"<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"a is positive :"<<endl;
    }
    else
    {
        if(a==0)
        cout<<"the number is zero :"<<endl;
        else
        cout<<"the number is negative";
    }
}

//write a program to print these numbers to one
//largest number via user input.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the numbers :"<<endl;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        cout<<"A is largest :"<<a<<endl;
        else
        cout<<"C is largest :"<<c<<endl;
    }
    else
    if(b>c)
    cout<<"B is largest :"<<b<<endl;
    else
    cout<<"C is largest :"<<c<<endl;
}
/*/
//write a program to print these numbers into one
//largest number via user input but if-else lader
//statement

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the numbers :"<<a<<b<<c<<endl;
    cin>>a>>b>>c;
    if(a>b)
    cout<<"A is largest :"<<a<<endl;
    else if(b>a && b>c)
    cout<<"B is largest :"<<b<<endl;
    else
    cout<<"C is largest :"<<c<<endl;
}