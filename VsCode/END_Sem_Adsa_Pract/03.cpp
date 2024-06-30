//using unordered_mapping
#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

int main()
{
    //unordered_map
    unordered_map<int, list<int>> adj;

    int n, e;
    cout<<"enter the nodes : "<<endl;
    cin>>n;
    cout<<"enter the edges : "<<endl;
    cin>>e;
    
    adj[n].push_back(e);

    for (auto i : adj)
    {
        cout<<i.first<<" ";
        for(auto j : i.second)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }


}