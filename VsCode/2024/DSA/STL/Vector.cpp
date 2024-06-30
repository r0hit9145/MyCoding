//using Vectors
#include<iostream>
//library file
#include<vector>
using namespace std;

class Vc 
{
    public:
    void Vectoring()
    {
        vector< int> vs;//empty container

        vs.push_back(1);// data push.

        vs.emplace_back(3);// at the end data pushing.

        vs.emplace_back(34);
        cout<<vs.front()<<endl;

        cout<<vs.back()<<endl;//point at the end value.


        //vector of pair

        vector<pair<int,int>> arr;

        arr.emplace_back(5, 100);

        // for(auto i: arr)
        // {
        //     cout<<i<<" ";
        // }
        cout<<arr.front().first<<arr.front().second<<endl;
    }
};

int main()
{
    Vc obj;
    obj.Vectoring();
    return 0;
}