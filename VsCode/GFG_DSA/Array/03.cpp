//                Subarray -- 0(n)

//Hack--- Using sliding window concept.

//finding target element's index- 1-based index
/*
suppose- key =14
position 4th to 5th
output- [3, 4], [4, 5]
*/
        // without stl 
#include<iostream>
using namespace std;

class Solution
{
    public:
    void Find_Subarray_index(int arr[], int n, int key)
    {
        int left=0,right=0, current_sum=0;

        while(right<n)
        {
            //storing the size as the size of key.
            current_sum=current_sum+arr[right];

            while(current_sum>key)
            {
                //shrink the window size
                current_sum-=arr[left];
                left++;
            }

            //If i were found the key
            if(current_sum==key)
            {
                cout<<"["<<left+1<<", "<<right+1<<"]"<<endl;
                return ;
            }
            right++;
        }

    }
};


int main()
{
    Solution s;
    int arr[5]= {1, 2, 5, 7, 5};
    int size=5;
    int key=14;

    s.Find_Subarray_index(arr, size , key);
}