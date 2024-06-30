// //Try to sort the data 0's, 1's and 2's in acending order
// //time complexity- 0(n*2)

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// class Solve
// {
//     public:
//     vector<int> sorting(vector<int> &arr)
//     {
//         sort(arr.begin(), arr.end());
//         return arr;
//     }
// };

// int main()
// {
//     Solve s;
//     vector<int> arr= {0, 2, 1, 2, 0};
//     //int n=5;
//     vector<int> ans= s.sorting(arr);
//     for(auto i: ans)
//     {
//         cout<<i<<" ";
//     }
// }

//Approach-- 2

//sorting - 0's, 1's and 2's
// time complexity-- 0(n)
// #include<iostream>
// using namespace std;

// class Solve
// {
//     public:
//     void sorting(int arr[], int n)
//     {
//         for(int i=0; i<n; i++)
//         {
//             //int j=0;                  //0(n**2)- time complexity
//             for(int j=i+1; j<n; j++)
//             {
//                 if(arr[i]>arr[j])
//                 {
//                 swap(arr[i], arr[j]);
//                 }
//             }
//         }

//         for(int i=0; i<n; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int main()
// {
//     Solve s;
//     int arr[]={0, 1, 2, 0, 0, 1, 1, 2, 0, 0, 1, 1, 1, 1};
//     int n= sizeof(arr)/sizeof(int);
//     s.sorting(arr, n);
// }


// sorting the array -- Using sort function.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={1, 0, 2, 1, 0};
    //void sorting(vector<int> &arr)
    {
        for(int i=0; i<arr.size(); i++)
        {
            sort(arr.begin(), arr.end());
            cout<<arr[i]<<" ";
        }
    }
}