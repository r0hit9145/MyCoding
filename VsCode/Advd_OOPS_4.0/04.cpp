#include<iostream>
using namespace std;

class str
{
    public:
    void reverse_string(char arr[], int size)
    {
        int start=0; int end= size-1;
        
        for(int i=0; i<size; i++)
        {
            if(start<end)
            {
                // swap(arr[start], arr[end]);
                // start+1;
                // end-1;
                int temp= arr[start];
                arr[start]= arr[end];
                arr[end]=temp;
            }
        }
        
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};

int main()
{
    char arr[5]={'G', 'e', 'e', 'k', 's'};
    int size=5;
    str obj1;
    obj1.reverse_string(arr, size);
}
