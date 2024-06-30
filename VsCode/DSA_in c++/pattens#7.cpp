//patterns ----> improve understanding, logic build.
/*
****** pattern like this----->
******
******


#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the pattern row & column forms :"<<endl;
    cin>>num;
    int row=1;
    while(row>=num)
    {
       int column=1;
        while(column>=num)
        {
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
}

//pattern like this---->
//4321
//4321
//4321

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int row=1;
    while(row<=num)
    {
        int column=1;
        while(column<=num)
        {
            cout<< num-column+1<<" * ";
            column++;
        }
        cout<<endl;
        row++;
    }
}*/
//pattern like this----->
/*

*
* *
* * *
* * * *


#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int r=1;
    while(r<=num)
    {
        int col=1;
        while(col<=r)
        {
            cout<<"*"<<" ";
            //cout<<r<<" ";//try it out without *.
            col++;
        }
        cout<<endl;
        r++;
    }
}*/
//pattern like this----->
/*
1
2 3 
4 5 6
7 8 9 10----------- pending !
*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int row=1;
    while(row<=num)
    {
        int col=1;
        while(col<=row)
        {
            cout<<col;
            col++;
            cout<<col+1;
        }
        cout<<endl;
        row++;
    }
}