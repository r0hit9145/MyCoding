//double pointer to use it storing existen variable address.

#include<iostream>
using namespace std;
int main()
{
    //very very important concept !
    // int f=12;
    // int p=22;
    // int *ptr= &f;
    // (*ptr)++;
    // *ptr=p;
    // cout<<*ptr<<endl<<f<<endl<<p<<endl;
    


    //star***** concept
    // int a=23;
    // int *b=&a;
    // a++;
    // cout<<a<<endl<<*b;//24


    //star***** concept
    // int a=23;
    // int *b=&a;
    // b++;
    // cout<<a<<endl<<*b;//24

    //holding awaiting....... mode
    int a = 7;
    int *c = &a;
    c = c + 3;
    cout<< c << endl;












    //double pointer
    // int a=23;
    // // int *b=&a;
    // // int **c=&b;
    // // cout<<*(*c)<<endl;
    // int x=34;
    // int g=44;
    // int *y=&x;
    // cout<<*y<<endl;//34
    // *y=g;
    // cout<<*y<<endl;//44

}