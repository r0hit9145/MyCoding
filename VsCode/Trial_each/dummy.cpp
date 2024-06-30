// #include<iostream>
// #include<vector>
// using namespace std;

// class Sol
// {
//     public:
//     void Finding_duplicate(vector<int>arr, int )
//     {
//         vector<int> result;
//         for(int i=0; i<arr.size(); i++)
//         {
//             for(int j=i+1; j<arr.size(); j++)
//             {
//                 if(arr[i]==arr[j])
//                 {
//                     cout<<i<<", "<<j<<"->"<<arr[j]<<endl;
//                 }
//             }
//         }
//     }
// };

// int main()
// {
//     Sol s;
//     vector<int> arr={1, 3, 1, 2, 3, 6, 2, 6};
//     int n=sizeof(arr)/sizeof(int);
//     s.Finding_duplicate(arr, n);
//     // for(auto i: ans)
//     // {
//     //     cout<<arr[i]<<' ';
//     // }


// }



#include <iostream>
#include <vector>

using namespace std;

vector<int> findDuplicates(const vector<int>& nums) {
    vector<int> result;

    for (int i = 0; i < nums.size(); ++i) 
    {
        int index = abs(nums[i]) - 1;

        if (nums[index] < 0) 
        {
            result.push_back(index + 1);
        }
        else 
        {
            nums[index] = -nums[index];
        }
    }

    if (result.empty()) 
    {
        result.push_back(-1);
    }

    return result;
}

int main() {
    // Example usage with 5 values:
    vector<int> arr = {3, 2, 4, 1, 2};
    vector<int> result = findDuplicates(arr);

    // Printing the result
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
