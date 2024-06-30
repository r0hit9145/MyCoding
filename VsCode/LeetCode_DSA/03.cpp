//To learn a pair of the array's partation- min difference
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
    public:
    int Min_difference(vector<int> arr, int k)
    {
        //Once the sorted the array.
        sort(arr.begin(), arr.end());
        //cout<<arr[0];
        //cout<<arr[2];

        int size= arr.size();
        //cout<<size;

        int sum= arr[size-1]- arr[size-2];
        return sum;
         
    }
};

int main()
{
    Solution s;
    vector<int> arr={9, 4, 1, 7};
    int ans=s.Min_difference(arr, 2);
    cout<<ans;
}