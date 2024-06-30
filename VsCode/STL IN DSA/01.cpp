//STL- standard ?
// using in an array
#include<iostream>
#include<array>
using namespace std;

int main()
{
    //normal creating an array in static 
    //int arr[4]={2, 3, 4, 5};

    //in stl 
    array<int,4> a={2, 3, 4, 5};
    //cout<<arr[-1]<<"       ";
    
    int size=a.size();
    cout<<size<<endl<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }

    // check a element at secons position
    cout<<"Element at second position :"<<a.at(2)<<endl;

    //check empty or not
    cout<<"Empty or not :"<<a.empty()<<endl;
    
    //check a element front 
    cout<<"Front :"<<a.front()<<endl;

    //vice-versa
    cout<<"Last element :"<<a.back()<<endl;
}