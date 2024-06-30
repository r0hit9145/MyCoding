/*#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>0)
    
        cout<<"a is positive"<<endl;
    
    else
    {
        cout<<"a is negative";
    }
}

/* Experiment of conditional and looping
            Type--1
 

#include<iostream>
using namespace std;
int main()
{
    int a;
    char ch='a';
    ch=cin.get();
    a=cin.get();//read character,space,tab,enter->cin.get();
    cout<<"Value of a is :"<<a<<endl;
    cout<<"Value of ch is :"<<ch<<endl;
}*/

//write a program to print uper,lower,numerical values.
#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter any alphabat and numeric"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z')
    cout<<"Lower case :"<<endl;
    if(ch>='A' && ch<='Z')
    cout<<"Uper case :"<<endl;
    if(ch>='0' && ch<='9')
    cout<<"Numeric case :";  
}

//Experiement of it---> Using ifelse, else ?
