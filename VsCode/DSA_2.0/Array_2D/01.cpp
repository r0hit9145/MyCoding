//2-D Array implementation to passing in function.
#include<iostream>
using namespace std;

//using function
void rc(int arr[][3], int n)
{
    //for the rows
    int j;
    //input the rows or columns.
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //for the columns
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //output the rows or columns.
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            //for the columns
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


}

// int main body
int main()
{
    int arr[3][3];
    int n=3;
    rc(arr, 3);
}