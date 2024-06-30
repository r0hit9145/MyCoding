//important concept between character or array
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2, 3, 4, 5, 6};
    //------- VS---------
    //char charr[6]= "rohit";
    // //attention here !!!
    // cout<<arr<<endl;
    // cout<<charr<<endl;
    // //printing entire string.
    // char *c= &charr[0];
    // cout<<c;
    // //never ever to do like the below code.
    // char *ptr= "rohit";
    // cout<<ptr;//neverrrrrrrrrrrrrrr


    char ch= 'A';
    char *ch1=&ch;
    cout<<ch1<<endl<<*ch1;
}