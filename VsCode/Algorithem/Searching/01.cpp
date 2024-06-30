//Binary searching algorithem
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Sorted form of the array elements.
    vector<int> arr= {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n=10;
    int L=0; 
    int R= n-1;
    int mid= (L+R)/2;// even through can be impoved more than in.
    for(int i=0; i< arr.size()/2; i++)
    {
        if(arr[mid]==72)
        {
            cout<<"Element is found : "<<mid<<"-->"<<arr[mid]<<endl;
        }
        if(72> arr[mid])
        {
            L= mid;
        }
        else
        {
            R=mid;
        }
        mid= (L+R)/2;
    }
}