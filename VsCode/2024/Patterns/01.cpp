#include<iostream>
using namespace std;

void pattern1()
{
    int n = 30;
    int cnt=1;
    for(int i=0; i<n; i++)
    {
        // space
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }

        // *
        for(int k=1; k<=cnt; k++)
        {
            cout<<"*";
        }

        // spaces
         for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cnt+=2;
        cout<<endl;
    }

    
}

int main()
{
    system("cls");
    pattern1();
    return 0;
}