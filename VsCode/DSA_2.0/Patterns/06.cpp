#include<iostream>
using namespace std;

void pattern1()
{
    int i=0;
    for(int i=0; i<4; i++)
    {
        char ch='A'+i;
        for(int j=0; j<=i; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }

}

//int main body.
int main()
{
    pattern1();
}