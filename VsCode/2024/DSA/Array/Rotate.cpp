// //Rotation of an array from left to right.......
// #include<iostream>
// using namespace std;


// class Rotate 
// {
//     public:
//     void Rotation_array(int arr[], int tem[], int size, int k)
//     {
//         for(int i=0; i<size; i++)
//         {
//             tem[(i+k)%size]= arr[i];
//             cout<<arr[i]<<" ";
//         }
//     }

//     void Printing_Rotated_array(int tem[], int size)
//     {
//         for(int i=0; i<size; i++)
//         {
//             cout<<tem[i]<<" ";
//         }
//     }
// };

// int main()
// {
//     Rotate r;
//     int arr[4]={12, 13, 14, 15};
//     int tem[4];
//     int size=4;
//     cout<<"Enter the kth position :"<<endl;
//     int k;
//     cin>>k;
//     cout<<"Before printing the array of rotation : "<<endl;
//     r.Rotation_array(arr, tem, size, k);
//     cout<<"After rotating the array : "<<endl;
//     r.Printing_Rotated_array(tem, size);
// }


// an array rotation from right to left
#include<iostream>
//vector
#include<vector>
using namespace std;

void Array_left_rotation(vector<int> &arr, vector<int> &tem, int size)
{
    //vector array
    //kth position
    int k=1;
    for(int i=0; i<arr.size(); i++)
    {
        tem[(i+k)%arr.size()]= arr[i];
        ++k;
    }
}

//printing the left rotation array.
void Printing_left_rotation_array(vector<int> &tem, int size)
{
    for(int i=0; i<tem.size(); i++)
    {
        cout<<tem[i]<<" ";
    }
}
int main()   //
{
    vector<int> arr={1, 2, 3, 4, 5};
    vector<int> tem(arr.size());
    int size=5;
    
    Array_left_rotation(arr, tem, size);
    Printing_left_rotation_array(tem, size);
}