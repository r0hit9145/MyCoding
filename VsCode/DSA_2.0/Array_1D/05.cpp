// array with funtions body.
#include<iostream>
using namespace std;

//function
int arrwithfunction(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        return arr[i+5];
    }

}

// main body of "int main"
int main()
{
    int arr[10];
    int n=10;
    //message input.
    cout<<"Enter 10 array elements:\n";
    // user input
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"array of 10 elements are :\n";
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Passing your an array elements :\n";
    int store= arrwithfunction(arr, n);
    //if(store!=0){
    cout<<store;
}
