// a sum of the elements for a 2-D array.
#include<iostream>
using namespace std;

int sum_element(int arr[][3], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<arr[i][j];
            sum= sum+ arr[i][j];
        }
        return sum;
    }

}

//int main body
int main()
{
    int arr[3][3];
    int n=3;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //to create a function
    int sum= sum_element(arr,n);
    cout<<"Total sum at index :"<<sum;
    
}