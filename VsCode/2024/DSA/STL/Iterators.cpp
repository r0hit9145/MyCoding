//Using iterators
#include<iostream>
#include<vector>
using namespace std;

class Demo
{
    public:
    void Iterator(int i)
    {
        vector<int> v(6,100);
        
        //Working of its like looping.
        vector<int>:: iterator arr= v.begin();

        arr++;
        cout<<*(arr)<<i<<endl;

        arr+=2;
        cout<<*arr<<endl;

        //erasing element
        //v.erase(v.begin()+1);

        //Inserting element...
        v.insert(v.begin()+1, 122);
        cout<<v.front()<<endl;

        //inserting first after....2 elements
        v.insert(v.begin()+1, 2, 13);
        for(auto i: v)
        {
            cout<<i<<" ";
        }

        //check size
        cout<<endl<<v.size()<<endl;

        //pop it
        v.pop_back();
        cout<<v.size()<<endl;

        //Magic one, can be swapped.
        vector<int> v2={12, 34, 23, 45, 56};

        v2.swap(v);

        for(auto j: v2)
        {
            cout<<j<<" ";
        }
        cout<<endl;

        for(auto k: v)
        {
            cout<<k<<" ";
        }
        cout<<endl;

        //               OR
        
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
    }
};


int main()
{
    Demo d;
    d.Iterator(23);
}