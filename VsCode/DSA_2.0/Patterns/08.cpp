#include<iostream>
using namespace std;

void print_d()
{
    for(int i=0; i<3; i++)
    {
        //star
        for(int j=0; j<3; j++)
        {
            if(i==1 || i==2)
            {
                continue;
            }

            else
            cout<<"*";
        }
        cout<<endl;

    }

}










int main()
{
    print_d();
}