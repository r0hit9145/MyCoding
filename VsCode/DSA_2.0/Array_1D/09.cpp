// we're goint to deletion an array elements
//deletion 
#include<iostream>
using namespace std;

//using a function
// void traverse(int arr[], int n)
// {
//     //traversal part
//      for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

void deletion(int arr[], int index, int element, int size)
{
    for(int i=0; i<size; i++)
    {
        if(i==index || i>index)
        {
            arr[i]=arr[i+1];
            cout<<"Delete successfully :"<<endl;
        }
    }
        size--;

    for(int i=0; i<size; i++)
        {
            cout<<arr[i];
            cout<<" ";
        }


}
int main()
{
    int arr[20]={2, 3, 5, 6, 8};
    int size=5;
    int index=4;//5
    int element=5;
    // for(int i=0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    //traverse(arr, n);

    deletion(arr,index, element, size);
    //cout<<insertion_element;
}