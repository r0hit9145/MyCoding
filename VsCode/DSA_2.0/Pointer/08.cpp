//double pointer gaming
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr=&a;
    int **ptr1=&ptr;
    
    cout<<"a->"<<a<<endl;
    cout<<"&a->"<<&a<<endl;
    cout<<"*ptr->"<<*ptr<<endl;
    cout<<"*ptr1->"<<*ptr1<<endl;
    cout<<"**ptr1->"<<**ptr1<<endl;
    cout<<"*ptr1->"<<*ptr1<<endl;
    cout<<"ptr->"<<ptr<<endl;

    //concusion'
     
   //  &a= ptr= ptr1, these are equal mode.
}