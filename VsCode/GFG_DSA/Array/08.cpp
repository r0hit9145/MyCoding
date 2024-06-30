// sorting- 0's, 1's and 2's only using - Detch natinal algo- DNF
// using three pointers
#include<iostream>
using namespace std;

class Dm
{
    public:
    void Detch_sort(int arr[], int n)
    {
        //Using three pointer-- DNF algo
        int low=0; int mid=0; int high=n-1;
        //cout<<low<<mid<<high;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            
            else if(arr[mid]==1)
            {
                mid++;
            }

            else
            {
                if(arr[mid]==2)
                {
                    swap(arr[mid], arr[high]);
                    high--;
                }
            }
        }
        low=0; high=n-1;
        while(low<=high)
        {
            cout<<arr[low]<<" ";
            low++;
        }
    }
};

int main()
{
    Dm obj;
    int arr[5]={1,0,2,1,0};
    int n= sizeof(arr)/sizeof(int);
    cout<<"After sorting the array :\n";
    obj.Detch_sort(arr,n);

}