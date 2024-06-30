#include<iostream>
using namespace std;

inline void fun1(long long int a)
{
    cout<<a<<endl;
    for(int i=0; i<10000; i++)
    {
        cout<<a<<endl;
    }
}


int main()
{
    fun1(3);
}