//We're calculating a max of the elements of a 2-D array.
#include<iostream>
using namespace std;

void Print_max(int arr[][3], int size, int max)
{
    //int max= -2;
    int store_max= max;
    //int index=1;
    cout<<"We're are goint to print a max element:"<<endl;;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(store_max<arr[i][j])
            {
                store_max=arr[i][j];
            }
        }
        cout<<endl;
        //index+=1;
    }
    cout<<"My store_max is at index :"<<" "<<store_max;

}

//int main body
int main()
{
    int arr[3][3]={1, 4, 3,  4, 45, 6,  7, 3, 9};
    int n=3;
    int max=-2;
    Print_max(arr, n, max);
}