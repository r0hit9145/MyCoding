#include<iostream>
using namespace std;
// void pattern1()
// {
//     int n;
//     int count=2;
//     cout<<"Enter your rows and colums";
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout<<" * "<<count;
//             count+=2;
//         }
//         cout<<"\n";
//     }
// }

// void pattern2()
// {
//     int n;
//     cout<<"Enter your rows and colums";
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<=i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// void pattern3()
// {
//     int n;
//     cout<<"Enter your rows and colums";
//     cin>>n;
//     for(int i=1; i<n; i++)
//     {
//         for(int j=1; j<=i; j++)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }
// }

void pattern4()
{
    int n;
    cout<<"Enter your rows and colums";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main()
{
    // pattern1();
    // pattern2();
    // pattern3();
       pattern4();

}