//a making pascale triangle like this.
/*
Problem statement
You are given an integer ‘N’. You need to return the first ‘N’ rows of Pascal’s triangle.

Example:

Input:
N = 4
Output:
1
1 1
1 2 1
1 3 3 1
*/
// #include<iostream>
// using namespace std;

// class Pascal 
// {
//     public:

//     void generating_row(int row)
//     {
//         //first and second
//         int first=1;
//         cout<<first<<"  ";
//         int check=1;
//         for(int col=1; col<row; col++)
//         {
//             check=(check*(row-col))/col;
//             cout<<check<<"  ";
//             //cout<<(check/col)<<"  ";
//             //cout<<result<<" ";
//         }
//         cout<<endl;
//     }
//     void Pascal_triangle()
//     {
//         for(int row=1; row<=9; row++)
//         {
//             generating_row(row);
//         }
//     }
// };

// int main()
// {
//     Pascal p;   
//     p.Pascal_triangle();
// }

// this is vector form---------

#include<iostream>
#include<vector>
using namespace std;

void Generating_row(int row)
    {
        long long int check=1;
        vector<int> ans;
        ans.push_back(1);
        cout<<check<<"  ";
        for(int col=1; col<row; col++)
        {
            check= (check*(row-col))/col;
            cout<<check<<"  ";
        }
        cout<<endl;
    }


    void Pascal_triangle(int size)
    {
        vector<vector<int>> first;
        //vector<int> row;
        for( int row=1; row<=size; row++)
        {
            (Generating_row(row));
        }
    }

int main()
{
    //Generating row'th values;
    int size=(5);
    Pascal_triangle(size);
    //Generating_row();
    
}