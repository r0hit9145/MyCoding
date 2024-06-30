// without oops using recursion
#include <iostream>
using namespace std;

int factorial(int n)
{
    // where to stop, until or unless
    // base case
    if (n == 0)
        return 1;
    // recursion relation.
    int smallerproblem = factorial(n - 1);//Here, calling power() function.

    int biggerproblem = n * smallerproblem;

    return biggerproblem;
}

// to calculate a power of a number.
int power(int n)
{
    // where to stop, until or unless
    // base case
    if (n == 0)
        return 1;

    // recursion relation.
    int small = power(n - 1);
    int big = 2 * small;
    return big;
}
// int main body. 
int main()
{
    int num;
    cout << "Using recursion approach :\n";
    cin >> num; // 3.

    int factorial_ = factorial(num);
    int power_ = power(num);
    cout << factorial_ << endl;
    cout << power_;
}