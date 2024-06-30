//Sorting -------- Selection sort algorithem.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr= {13, 46, 24, 52, 20, 9};
    int n=6;
   int i,j;
    //int count=0;
    //p:
    for(i=0; i<=n-1; i++)
    {
        int min= INT_MAX;
        //int min_index=i;
        int count=0;//------------------tricky part
        for(j=i; j<n; j++)
        {
            if(arr[j]<min)
                {
                    min= arr[j];
                    //min_index=j;
                    count=j;
                    //count++;
                }   
        // count++;
        }
            swap(arr[i], arr[count]);
            //cout<<" "<<i<<" "<<min_index<<endl;
            //cout<<" "<<arr[i]<<" "<<arr[min_index]<<endl;
            //count++;
            //goto p;
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}