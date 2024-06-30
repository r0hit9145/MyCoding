//febonacci series 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    int n ;
    cout<< "enter the value of n :"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        int x;
        
        x=v[i-1]+v[i-2];
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        // int x;
        // x=v[i-1]+v[i-2];
        cout<<v[i]<<" ";
    }
    return 0;
}
