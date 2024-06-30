// // a given array into reverse order.
// #include <iostream>
// using namespace std;

// // using function.
// void reverse_order(int arr[], int size)
// {
//     int i=4;
//     cout<<"After reversing order :\n";
//     while (i >=0)
//     {
//         cout <<arr[i]<<" ";
//         i--;
//     }
// }

// // main body of int main.
// int main()
// {
//     int arr[5];
//     int n = 5;
//     cout << "enter a array of 5 elements :\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<"Before reversing order :\n";
//     reverse_order(arr, n);
// }
// but here, its time complexity is not good enough.

                   /*or- better time complexity*/

// a given array into reverse order.





#include <iostream>
using namespace std;
//global variable

// using function.
void reverse_order(int arr[], int size)
{
    int start=0;
    int i=0;
    int end= size-1;
    cout<<"After reversing order :\n";
    while (start<=end)
    {
        swap (arr[start], arr[end]);
        start ++;
        end--;
    }

     for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
}

// main body of int main.
int main()
{
    int arr[5];
    int n = 5;
    cout << "enter a array of 5 elements :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Before reversing order :\n";
    reverse_order(arr, n);
}