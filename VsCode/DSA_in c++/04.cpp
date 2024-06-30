//wap to in binary search.
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int num, int find)
{
    int start=0;
    int end= num-1;

    int mid= (start+end)/2;

    while(start<=end)
    {
        if(find== arr[mid])
        {
            if(find==arr[mid])
            {
                return find;
            }
            else
            return 0;
        }

        else if(find<=arr[mid])
        {
            start= mid+1;
        }

        else if(find>=arr[mid])
        {
            end= mid-1;
        }

        mid= (start+end)/2;
    }

}

int main()
{
    int arr[10];
    int n=10;
    int key;
    for(int i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before searching an element, enter key :"<<endl;
    cin>>key;

    int bs= binary_search(arr, n, key);
    if(bs==key)
    {
        cout<<"My searching element is at"<<bs;
    }

    else
    cout<<"not found:"<<endl;
    
}