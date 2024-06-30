//Permutations of a string of data arr[1, 2, 3]= [abc], 
// [acb], no of combination n!= 3!= 3*2*1=>6 total
// [bac], 
// [bca], 
// [cba], 
// [cab], 
//
// #include<iostream>
// //vector form
// //#include<vector>
// using namespace std;


// class Permutation 
// {
//     public:

//     //function called
    
//     void permute(string arr, int index, int size)
//     {
//         //base case
        
//         if(index>=size)
//         {
//             cout<<"["<<arr<<"], "<<endl;
//             return;
//         }

//         for(int i=index; i<size; i++)
//         {
//             swap(arr[index], arr[i]);
//             //recursion approach
//             //cout<<arr[i]<<" "<<endl;

//             permute(arr, index+1, size);
            
//             //backtracking 
//             swap(arr[index], arr[i]);
//         }
//     }

//     void Permutation_string(string arr, int size)
//     {
//         int index=0;
//         permute(arr, index, size);
//         //cout<<result<<" "<<endl;
//     }
    
// };

// int main()
// {
//     //permutation
//     Permutation p;
//     string arr="abc";
//     int size=arr.size();
//     p.Permutation_string(arr, size);
// }

// second approach 
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    private:


    // let's understand vector of vector
    /*
    suppose, like below the code:
    vector<vector<int>> ans:
    [1, 2, 3]
    [1, 3, 2]
    [2, 1, 2] that means storing the item in the list form.
    */
    void recurPermute(vector<vector<int>> &ans, vector<int> &ds, vector<int> &arr, int freq[])
    {
        // base case
        if(ds.size()==arr.size())
        {
            // main storing one by one possibled combination.
            ans.push_back(ds);
            return ;
        }

        
        // main logic:
        for(int i=0; i<arr.size(); i++)
        {
            //freq count:
            if(!freq[i])
            {
                // temporary push back the items:
                ds.push_back(arr[i]);
                freq[i]=1;

                // recursion called.
                recurPermute(ans, ds, arr, freq);

                // when return from the at end:
                ds.pop_back();
                freq[i]=0;// again to reset;
            }
        }
        
    }

    public:
    vector<vector<int>>permute(vector<int> &arr)
    {
        // ans for storing all the posible combination.
        vector<vector<int>> ans;
        // temporary store elements
        vector<int> ds;
        // maping frequency
        int freq[arr.size()]={0};
        // one for loop
        for(int i=0; i<arr.size(); i++)
        {
            freq[i]=0;
            recurPermute(ans, ds, arr, freq);
        }
        // now, printing the combination one by one.
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> arr={1, 2, 3};
    s.permute(arr);
}