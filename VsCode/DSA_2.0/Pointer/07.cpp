//pointer with the functions.
#include <iostream>
using namespace std;

//creating a function along pointer
void fun(int *ptr)
{
    cout<<ptr<<endl<<*ptr<<endl;
}

void updata(int *a)
{
    //but inside the function
    a=a+1;
    cout<<"Insie->"<<a;//output ?
}
int main()
{
    int a=5;
    int *ptr=&a;
    //fun(ptr);
    cout<<"Before->"<<ptr<<endl;// output ?
    updata(ptr);
    cout<<"After->"<<ptr<<endl;//output ?

}