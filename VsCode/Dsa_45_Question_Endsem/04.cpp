//Cyclically rotate an array by ‘K’ positions. [O(N)]
//eg. If K=2, and Arr = 1,2,7,0,8
//then Ans = 0,8,1,2,7
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,7,0,8};
    int n=sizeof(arr)/sizeof(int);
    int k=3;
    for(int i=k; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<k ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    for(int i=0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}