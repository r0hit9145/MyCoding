//dynamically memory allocation
#include<iostream>
using namespace std;

//using a function
void dynamic_fun(int *arr, int n)
{
    cout<<((*arr))<<endl;
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i];
    }
    
}

//int main body
int main()
{
    int size;
    cout<<"Enter your an array's elements size :\n";
    cin>>size;
    //array- dynamic memory allocation.
    int *arr= new int[size];
    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before :"<<endl;

    dynamic_fun(arr, size);

    cout<<"After :"<<endl;
    
    for(int i=0; i<size ; i++)
    {
        cout<<arr[i];
    }
    //better understanding for de-allcate the memory .
    delete[]arr;
}