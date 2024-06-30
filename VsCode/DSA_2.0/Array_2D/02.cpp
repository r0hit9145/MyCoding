// a key element searching in 2-D array to returning object.
#include <iostream>
using namespace std;

int key_searching(int arr[][3], int size, int key)
{
    int index = 0;
    cout << "We're going to search an element\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // cout << arr[i][j];
            if (key == arr[i][j])
            {
                return true;
            }
        }
        // cout << endl;
        index++;
    }
    return 0;
}

// int main body
int main()
{
    int arr[3][3];
    int n = 3;
    int key;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // for the columns
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Which key do you want searching.\n";
    cin >> key;

    int my_key = key_searching(arr, n, key);
    if (my_key == 1)
    {
        cout << key << " is found at index :";
    }
    else
    cout << "Sorry, the key isn't found :";

}