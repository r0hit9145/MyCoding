//                Subarray --

//finding target element's index- 1-based index
/*
suppose- target =12, target =14
position 4th to 5th
output- [3, 4], [4, 5]
*/
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1, 2, 5, 7, 5};
    int size=5;

    int target=12;
    int i,j;
    for(int i=0; i<size; i++)
    {
        int current_sum=0;
        for(int j=i; j<size; j++)
        {
            current_sum= current_sum + arr[j];

            if(current_sum==target)
            {
                cout<<"["<<i+1<<", "<<j+1<<"]"<<endl;

                //return 0;-- help to exit the loop.

                //cout<<i+1<<", "<<j+1<<endl;
                //break;
            }
        }
    }
}