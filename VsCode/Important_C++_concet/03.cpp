//dynamically array in 2-D
#include<iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    //creating 2-d an array through dynamic
    int **a= new int *[size];

    //taking the inputs
    for(int i=0; i<size; i++)
    {
        a[i]=new int [size];
    }

    //taking the inputs
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
        cin>>a[i][j];
        }cout<<endl;
    }

    //output
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    //releasing the memory in column forms.
     for(int i=0; i<size; i++)
    {
        delete [] a[i];
    }
    //Here, rows forms.
    delete []a;

    //how do create a dynamically 2-d array.
    //input/output
    //releasing the memory.

}