#include<iostream>
using namespace std;

void fun1()
{
    //char ch='E';
    int n=4;
    for(int i=0; i<n; i++)
    {
        //char ch='E'-i;
        for(char j=('E'-i); j<='E'; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}





//main function body
int main()
{
    fun1();
}