//Write a program that uses dynamic constructor to allocate memory
//to an array. Countthe number of even and odd elements
#include<iostream>
using namespace std;

class array
{
    int *arr;
    int size;
    public:
    //Constructor is called.......
    array(int n): size(n)
    {
        arr= new int[n];
    }

    //Destructor is called.
    ~ array()
    {
        delete [] arr;
        cout<<"Destructor is called : "<<endl;
    }

    void inputElements()
    {
        for(int i=0; i<size; i++)
        {
            cout<<"Enter the five array's elements : "<<endl;
            cin>>arr[i];
        }
    }

    void Diplay()
    {
        for(int i=0; i<size; i++)
        {
            if(arr[i]%2==0)
            {
            cout<<" the five arrays of even elements : "<<arr[i]<<endl;
            }
            else
            cout<<" the odd one are arrays elements : "<<arr[i]<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the array's element size : "<<endl;
    cin>>n;
    array *obj= new array(n);

    obj->inputElements();
    obj->Diplay();

    delete [] obj;
}