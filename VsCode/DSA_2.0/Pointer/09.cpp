// double pointer with function
#include <iostream>
using namespace std;

void update(int **ptr2)
{
    //ptr2 = ptr2 + 1;//no chage.

    *ptr2= *ptr2+1;// yes hoga

    **ptr2= **ptr2+1;// yes bilkul honga.

}

int main()
{
    int a = 4;
    int *p = &a;
    int **ptr2=&p;
    cout << "Before :->"<< endl;
    cout << "a :->" << a << endl;
    cout << "*p :->" << *p << endl;
    cout<<"**ptr2 :->"<<**ptr2<<endl;


    update(ptr2);
    cout << "After :->"<< endl;
    cout << "a :->" << a << endl;
    cout << "*p :->" << *p << endl;
    cout<<"**ptr2 :->"<<**ptr2<<endl;}