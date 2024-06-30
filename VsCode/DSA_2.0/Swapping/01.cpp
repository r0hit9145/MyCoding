//alternate swaping in the elements of an array :
#include<bits/stdc++.h>
using namespace std;


//function called
void swap_alter(int arr[], int n)
    {
        for(int i=0; i<5; i+=2)
        {
            if(i<n)
            {
                swap(arr[i], arr[i+1]);
            }
        }
            for(int i=0; i<5; i++)
            {
            cout<<arr[i]<<" ";
            }

            cout<<endl<<"After swaping the values :"<<endl;
            
    }

int main()
{
    int arr[5]= {10, 20, 3, 4, 6};
    int n=5;
    cout<<endl<<"Before printing the array and inside int main() :"<<endl;
    //function calling
    swap_alter(arr, n);
    return 0;
}
