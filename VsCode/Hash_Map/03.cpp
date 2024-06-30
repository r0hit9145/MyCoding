//for loop in stl -- auto keyword
//A question maximum occurence of the elements.
#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    int Max_Frequency(vector<int> &arr, int n)
    {
    //Creation of unordered map
    unordered_map<int,int> count;

    //Make a loop 
    for(int i=0; i<arr.size(); i++)
    {
        count[arr[i]]++;
    }

    }


}