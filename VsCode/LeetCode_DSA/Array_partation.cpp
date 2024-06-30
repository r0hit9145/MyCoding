//To learn a pair of the array's partation.
            //Day-1
#include<iostream>
//taking a vertor
#include<vector>
//for sorted    
#include<algorithm>
using namespace std;

class Solution
{
    //accessfies
    public:

    //The pair function
    int Pair_Sum(vector<int> arr, int n)
    //int Pair_Sum(int arr[], int n)
    {
        //Sorted the data

        sort(arr.begin(), arr.end());//-- for the vertor
        
        //Normal predefined function.
        //sort(arr, arr+n);
        //Sorting the sum
        int sum=0;
        for(int i=0; i<n; i+=2)
        {
            sum= sum+arr[i];
        }
        return sum;
    }
};

int main()
{
    Solution s;
    //int arr[4]={1, 4, 3, 2};
    vector<int>arr={1, 4, 3, 2};
    int size=4;

    int final_max= s.Pair_Sum(arr, size);
    cout<<"My maximum sum is : "<<final_max<<endl;
}