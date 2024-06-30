// //Sorting---- Bubble sorting partial mode but not original mode.
// // but its time complexity -----0(n*3)
// #include<iostream>
// using namespace std;

// class Hero
// {
//     public:
    

//     void Bubble_Sort(int arr[], int n)
//     {
//         for(int i=0; i<n; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 for(int k=j; k<n; k++)
//                 {
//                     if(arr[k]> arr[k+1])
//                     {
//                         swap(arr[k], arr[k+1]);
//                         //break;
//                     }
//                     //break;
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
//     Hero obj;
//     cout<<"Before Implementing bubble sorting ......."<<endl;
//     int arr[]={32, 41, 66, 56, 31, 89, 90, 100,-1};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<"After Implementing bubble sorting ......."<<endl;

//     obj.Bubble_Sort(arr, n);
// }

//pure bubble sorting --- 0(n*2)----- ORIGINAL BUBBLE SORT

#include<iostream>
using namespace std;

int main()
{
    int arr[]={30, 477, 65, 57, 78, 99, 100};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<(n-1)-i; j++)
        {
            if(arr[j]> arr[j+1])
            {
            swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}