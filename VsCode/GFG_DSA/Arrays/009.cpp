//Given an array A of positive integers. 
//Your task is to find the leaders in the array. 
//An element of array is leader if it is greater than or 
//equal to all the elements to its right side. 
//The rightmost element is always a leader. 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

class Sol
{
    public:
    void Leaders_Arr(vector<int> arr)
    {
        //int max= INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            int max= 0;
            for(int j=i; j<arr.size(); j++)
            {
                if(arr[i]==max)
                {
                    cout<<"1"<<" ";
                    break;
                    //goto p;
                }
                else if(arr[j]>max)
                {
                    max=arr[j];
                }
            }
            //p:
            cout<<max<<" ";
        }
    }
};

int main()
{
    Sol obj;
    vector<int> s= {16,17,4,3,5,2};
    obj.Leaders_Arr(s);
}