// a pattern of hollow triangle.
#include<iostream>
using namespace std;

void pattern10()
{
    // suppose, according to your choice
    int rows, columns;
    cin>>rows>>columns;
    //outside rows
    for(int i=1; i<=rows; i++)
    {
        //inner columns
        for(int j=1; j<=columns; j++)
        {
            //once a stars of the first row.
            //i==0--- 3 stars
            if(i==rows || i==1 || j==1 || j==columns)
            {
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }

}
//int main body;
int main()
{
    pattern10();
}