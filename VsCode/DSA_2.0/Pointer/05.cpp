//bigger difference in array along pointer
// array with pointer
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={2, 3, 4, 5};
    //ERROR-----------
    //arr= arr+1;//DUE TO SYMBOL TABLE 

    // BUT

    int *ptr= &arr[0];
    //perfectly running.
    //ptr= ptr+1;
    cout<<&arr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr<<endl<<*ptr;


}