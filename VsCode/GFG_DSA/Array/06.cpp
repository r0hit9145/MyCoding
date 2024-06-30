// finding duplicate element in an array --0(n)

//brute force ?-- 0(n*2)
#include<iostream>
#include<vector>
using namespace std;

class Solve
{
    public:
    vector<int>Duplicate_occurence(vector<int> &arr)
    {
        vector<int> result;
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                for(int k=j+1; k<arr.size(); k++)
                {
                if(arr[j]==arr[k])
                {
                    //result.push_back(i);
                    //result.push_back(j);
                    //cout<<result<<" ";

                    // cout<<arr[i]<<" ";
                    // break;

                    return {arr[j]};
                }
                // else
                // {
                //     return {arr[k]};
                // }
                }
            }
        }
        return {-1};
    }
};

int main()
{
    Solve s;
    vector<int> arr= {3, 4, 12, 3, 12, 3, 4, 4, 12, 7, 11, 6, 5};
    //int dup=3;

    vector<int> ans= s.Duplicate_occurence(arr);
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
}
