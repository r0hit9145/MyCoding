//vector 
#include<iostream>
#include<vector>
using namespace std;

void checkVc(vector<int> st)
{
    st.push_back(5);
    
    cout<<"After the size of vector : "<<st.size()<<endl;
    for(int i=0 ; i<st.size(); i++)
    {
        cout<<st[i]<<" ";
    }

    cout<<endl;
}



int main()
{
    vector<int> arr;
    int i;

    while(true)
    {
        cin>>i;
        if(i==-1)
        {
            break;
        }
        arr.push_back(i);
    }
    cout<<endl;
    cout<<"Before the size of vector : "<<arr.size()<<endl;

    //inserting the array into new function.
    checkVc(arr);
    return 0;
}