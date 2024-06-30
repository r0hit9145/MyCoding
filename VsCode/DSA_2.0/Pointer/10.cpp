#include <iostream>
using namespace std;
int main()
{
    int *ptr = 0;
    int first=4;
    int *p;
    //int *p = ptr; // segmatation faults.
    //int *p = &ptr; // error
    ptr = &first; // error
    
    cout << *ptr << endl;

    //important concepts

    //arr= &arr= &arr[0];-->same hai. address
    /*
    our mcq's hai love sir ki pointer wali last video mein solve it, if 
    you have doubt any types.
    */
}