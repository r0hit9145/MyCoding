// pattern of 1 or 0 combination using class or obj.
#include <iostream>
using namespace std;
int store;
int j;
// class
class pattern
{
    // int n=5;
public:
    // using function.
    // void print()

    // using constructor
    pattern()
    {
        cout << endl
             << "\t"
             << "My constructor called :\n";
        int n = 5;
        for (int i = 0; i < n; i++)
        {
            // using logic
            if (i % 2 == 0)
                store = 1;
            else
                store = 0;
            for (j = 0; j <= i; j++)
            {
                cout << store << " ";
                store = 1 - store;
            }
            cout << endl;
        }
    }
};

// int main body
int main()
{
    // this is variant of the function.
    // pattern zero_one;
    // using function.
    // zero_one.print();

    // if i am using constructor.
    pattern zero_one;
    pattern zero_one$;
    pattern h1;
}