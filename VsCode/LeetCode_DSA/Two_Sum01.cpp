//Trial with an array's elements
#include<iostream>
using namespace std;

//using function
int Two_sum(int arr[], int size, int key)
{
    cout<<"Inside the function :\n";
    for(int i=0; i<size; i++)
    {
        //int target=12;
        for(int j=0; j<size; j++)
        {
            int store= arr[i]+arr[j];
            if(store==key)
            {
                return j;
            }

        }
    }

}

//Main function body
int main()
{
    int arr[4];
    int n=4;
    int target;
    cout<<"Insie the main body :\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"In existing numbers, which element do you want sum :\n";
    cin>>target;
    int store_sum= Two_sum(arr, n, target);
    cout<<"The number position of  :"<<store_sum;
}