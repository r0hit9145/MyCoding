// wap to print a min element of giving an array.
#include<bits/stdc++.h>
using namespace std;

int Minfind(int arr[], int n)
{
    int min1= INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=min1)
        {
            min1= arr[i];
            //index=min;
            
        }
    }
    return (min1);
}

int main()
{
    int arr[10]={2, 3, 5, 6, 7, 8, 9, -1, 4, 1};
    int n=10;
    // cout<<"Enter the element, do you search:"<<endl;
    // cin>>min;
    int min= Minfind(arr, n);
    cout<<"My min element is at position of "<<"th "<<min;
    return 0;

}