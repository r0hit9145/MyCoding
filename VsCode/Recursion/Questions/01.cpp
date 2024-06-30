//Using recursion along with an array -
//only one variable took in its.
//Important is that indexing is make sure very well.
#include<iostream>
using namespace std;

class Hero
{
    public:
    
};

void Reverse(int arr[], int start)
    {
        int end=5;
        //base case
        if(start>=end/2)
        {
           return ;
        }  

        else
        {
            swap(arr[start], arr[end-start-1]);

            //Recursive calling
            Reverse(arr, start+1);
            // cout<<arr[start];
        }
    }

int main()
{
    system("cls");
    int arr[5]={2, 3, 4, 6, 8};
    int start=0;
    //calling to its called
    Reverse(arr, start);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}