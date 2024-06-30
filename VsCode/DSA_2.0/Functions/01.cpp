// try to passing pointer into a function.

#include<bits/stdc++.h>
using namespace std;

// void swapping(int *a, int *b)
/////// or call by reference.........
   void swapping(int &a, int &b)

{
    //Method--1

    //using third variable
    // int store;
    // store= *a;
    // *a=*b;
    // *b=store;

    //Method----2

    //with only 2 variable
    //swap(*a, *b);

    //Method----3
    // *a= *a+ (*b);
    // *b= *a- (*b);
    // *a= *a- *b;

    a= a+ (b);
    b= a- (b);
    a= a-b;
}

// main body of int main
int main()
{
    //int n;
    int a=3, b=4;
    // int *p=&a; int *q=&b;
    ///////// or call by reference "&- symbol"

    cout<<"Before swapping the values :"<<endl;
    cout<<a<<"-"<<b<<endl;
    swapping(a,b);
    // swapping(p, q);//address passing from a pointer.
    cout<<"After swapping the values :"<<endl;
    cout<<a<<"---"<<b<<endl;\
    //cout<<*p<<"---"<<*q;

}