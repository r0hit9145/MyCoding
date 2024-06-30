//using this pattern.
#include<iostream>
using namespace std;

//using function
void pattern()
{
    int n=4;
    //rows printing.
    for(int i=1; i<n; i++)
    {
        //columns printing numbers.
        for(int j=1; j<=i; j++)
        {
            cout<<j;
            if(j==3)
            {
                cout<<j;
            }
        }
         cout<<endl;
    }

}

//main body of the int main.
int main()
{
    pattern();
}