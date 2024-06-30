//wave in a 2D-array.
#include<iostream>
using namespace std;

void wave_print(int str[][3], int size)
{
    for(int i=0; i<size; i++)
    {
        while(i<size)
        {
            int j=0;
            if(i%2==0)
            {
                cout<<str[j][i];
            }

            else
            cout<<str[j][i];
            i++;
        }
    }

}







// int main body.
int main()
{
    int str[3][3]={{1, 2, 3}, {5, 6, 7}, {10, 20, 30}};
    int n=3;
    wave_print(str, n);
}