//            finding the index of missing number in an array
//       time - 0(n)
//This is optimized -for big numbers- math approach.
#include<iostream>
#include<vector>
using namespace std;

    int missingNumber(vector<int> &arr, int n)
    {
        int expected_Sum=n*(n+1)/2;

        //Calculating a sum of the array.
        int actual_Sum=0;

        for(int i=0; i<arr.size(); i++)
        {
            actual_Sum+=arr[i];
        }

        return expected_Sum-actual_Sum;
    }


int main()
{
    //input-1-vector<int> arr={1, 2, 3, 5};

    vector<int> arr2={6,1,2,8,3,4,7,10,5};
    int key=10;
    int ans= missingNumber(arr2, key);
    cout<<ans<<" "<<endl;
}
