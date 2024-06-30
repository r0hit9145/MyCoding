#include<iostream>
using namespace std;

class Hero{
    int i=0;
    int j=0;
    public:
    void print_data(int size)
    {
        for(int i=5; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
            {
                cout<<".";
            }
            cout<<endl;
        }
    }


};



//main body.
int main()
{
    Hero p1;
    p1.print_data(5);

}