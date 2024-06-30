#include<iostream>
using namespace std;


// void patterntringular()
// {
//     int n=5;
//     char count='a';
//     for(int i=0; i<n; i++)
//     {
//         //count= count+1;
//         for(int j=0; j<(n-i-1); j++)
//         {
//             cout<<" ";
//             //count++;
//         }
//          for(int j=0; j<(2*i+1); j++)
//         {
//             cout<<count;
//             //count= count+1;
//         }

//          for(int j=0; j<(n-i-1); j++)
//         {
//             cout<<" ";
//         }
//         cout<<endl;
//         count++;
//     }
// }

void pattern2()
{
    char ch= 'E';
    char store='E';

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout<<ch;
            store--;
            char str= store;
            cout<<str;
        }
        cout<<endl;
    }
}


int main()
{
    //patterntringular();
    pattern2();
}