#include<iostream>
using namespace std;

void Reverse(int arr[], int start, int end)
{
    // Base case
    if (start >= end) {
        // Print the array when the base case is reached
        for (int i = start; i <= end; i++) {
            cout << arr[start] << " ";
        }
        return;
    }

    // Swap elements at start and end indices
    swap(arr[start], arr[end]);

    // Recursive call
    Reverse(arr, start + 1, end - 1);
}

int main()
{
    system("cls");
    int arr[5] = {2, 3, 4, 6, 8};
    int start = 0;
    int end = 4;

    // Call the Reverse function to reverse the array
    Reverse(arr, start, end);

    return 0;
}
