#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={2,4,1};
    int buy= INT_MAX;
    int sell=INT_MIN;
    int count=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(buy>arr[i])
        {
            buy=arr[i];
        }
    }
    //cout<<"Minmum:"<<min;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i; j<arr.size(); j++)
        {
            if(buy==arr[j])
            {
                count=j;
                break;
            }
        }
        //cout<<count<<endl;
        
        for(count; count<arr.size(); count++)
        {
            if(arr[count]>sell)
            {
                sell=arr[count];
            }
        }
    }
    //cout<<sell<<endl;
    int total_profit= sell-buy;
    if(sell>buy)
    cout<<total_profit<<endl;
    else
    cout<<"0"<<endl;
}