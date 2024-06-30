//trial an array's copy to array2.
#include<iostream>
//inserting vector first to implemented it.
#include<vector>
using namespace std;

class Check
{
    public:
    void Explained_Vector()
    {
        //vector<int> arr= {1, 2, 3, 4, 5, 6};
        vector<int> arr(20, 1);

        //copy into second array
        vector<int> v(arr);

        
        // cout<<arr.front()<<endl;

        // arr.emplace_back(34);
        for(auto i: arr)
        {
            cout<<i<<" "<<endl;
        }
        cout<<endl;
        for(auto i: v)
        {
            cout<<i<<" ";
        }


    }
};

int main()
{
    Check obj;
    obj.Explained_Vector();
}