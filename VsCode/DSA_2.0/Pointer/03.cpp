#include <iostream>
using namespace std;
int main()
{
    // int a = 5;
    // int *p = &a;
    // cout<<&a<<endl;//a's address.
    // cout<<p;//a's address.
    // (*p)++;
    // cout<<((*p)++)<<endl;
    // cout<<*p<<endl;
    // //a++;
    // //a= a+1;
    // cout<<a+1;
    // cout<<a;
    // p=p+1;
    // cout << *p << endl; // 5
    // cout << p << endl;  // assume 100.
    // cout << "Before :" << endl;
    // p = p + 1;
    // cout << "After :" << endl;
    // cout << *p << endl;
    // cout << p;
    cout << "2" << endl;
    int i = 10;
    int *e;
    e = &i;
    cout << "Address of the variable i is " << e << endl;
    cout << "Address of the pointer p is " << &e<<endl;
    cout<<"after :"<<endl;
    cout<<&e;
    // *e = &i;
    // cout << "Address of the variable i is " << e << endl;
    // cout << "Address of the pointer p is " << &e;
}