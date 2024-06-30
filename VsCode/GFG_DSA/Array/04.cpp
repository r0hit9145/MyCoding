//                Subarray -- 0(n)

//Hack--- Using sliding window concept.

//finding target element's index- 1-based index
/*
suppose- key =14
position 4th to 5th
output- [3, 4], [4, 5]
*/

          //without stl

#include<iostream>
#include<vector>
using namespace std;

class Solve
{
    public:

    //Using stl-- return or parameters
    vector<int>find_subarray_index(vector<int>&arr, int n, int key)
    {
        //Another array 
        vector<int> final_result;

        int left=0, right=0, current_sum=0;

    //  Calculating the sum
        while(right<n)
        {
            current_sum+=arr[right];

        //if we were need to shrink the window size
            while(current_sum>key)
            {
                current_sum-=arr[left];
                left++;
            }

            if(current_sum==key)
            {
                final_result.push_back(left+1);
                final_result.push_back(right+1);
                return final_result;
            }

            //move to next element.
            right++;
        }

        //if subarray is not found.
        final_result.push_back(-1);
        return final_result;
    }
};


int main()
{
    Solve s;
    vector<int>arr={1, 2, 5, 7, 5};
    int size= 5;
    int key=12;
    vector<int> final_ans= s.find_subarray_index(arr, size, key);
    for(auto i: final_ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}