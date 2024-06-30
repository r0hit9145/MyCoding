// when you want any value,start with a number in whole array.
#include <iostream>
using namespace std;
int main()
{
    int str[100] = {1, 2};
    for (int i = 0; i < 10; i++)
    {
        // str[i+2]=20;
        str[i + 2] = 20;

        cout << str[i] << " ";
    }
}