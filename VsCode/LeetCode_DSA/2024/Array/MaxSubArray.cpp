// // Finding max of subArrays- Brute force: 0(n^3), s(1)
// #include<iostream>
// // STL
// #include<vector>
// // lib
// #include<climits>
// using namespace std;

// class solution{
//     public:

// };

// void MaxSubArrays(vector<int> & arr)
// {
//     int max=INT_MIN;
//     for(int i=0; i<arr.size(); i++)
//     {
//         for(int j=i; j<arr.size(); j++)
//         {
//             int sum=0;
//             for(int k=i; k<=j; k++)
//             {
//                 sum+=arr[k];
//             }
//             if(sum>max)
//             {
//                 max=sum;
//             }
//         }
//     }
//     cout<<"The maximum sub of array is : "<<max<<endl;
// }


// int main()
// {
//     vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
//     MaxSubArrays(arr);
// }

// 0(n^2), s(1)
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

class sol{
    public:

    void MaxSubArrays(vector<int> & arr)
    {
        int maxi=INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            int sum=0;
            for(int j=i; j<arr.size(); j++)
            {
                sum+=arr[j];
                //maxi= max(sum,maxi);
                if(sum>maxi)
                    {
                        maxi=sum;
                    }
            }

            
        }
        cout<<"The maximum sub of array is : "<<maxi<<endl;
    }
};

int main()
{
    sol s;
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    s.MaxSubArrays(arr);
}