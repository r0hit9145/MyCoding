// using this pattern
#include <iostream>
using namespace std;

// using function
// global variable-
int i, j;
void right_angel()
{
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    //another logic by striver video--(2n-1)
    for (i = 3; i >=0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

}

// main body of the int main
int main()
{
    right_angel();
    return 0;
}