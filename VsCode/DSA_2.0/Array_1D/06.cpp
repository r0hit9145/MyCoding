// find max or min;
//second or third largest- by itself do it.
#include<bits/stdc++.h>
using namespace std;

int i=0;
//using an array with function
int min_element(int arr[], int n)
{
    int min= 210;
    while(i<n)
    {
        if(arr[i]<min)
        {
            min= arr[i];
        }
        i++;
    }
    return min;
    
}

//int main body
int main()
{
    int arr[5];
    int n=5;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int store_min= min_element(arr, n);
    cout<<"MY max :"<<store_min<<endl;
}