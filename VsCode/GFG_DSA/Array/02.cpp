//sliding window in an array-- 0(n*2)
//Output-- [3, 3, 5, 5, 6, 7]
#include<iostream>
using namespace std;

class Solution
{
    public:
    
    void Sliding_window(int arr[], int n)
    {
        //This is window size
        int k=3;
        int sum;
        for(int i=0; i<=(n-k); i++)// or i<=n;
        {
            sum=0;
            for(int j=i; j<(i+k); j++)
            {
                //finding each elment to the first maximum.
                sum= max(sum, arr[j]);
                //cout<<sum<<" ";
            }
            cout<<sum<<" ";
        }
    }
};

int main()
{
    Solution s;
    int arr[8]={1, 3, -1, -3, 5, 3, 6, 7};
    int size=8;

    s.Sliding_window(arr, size);
}
