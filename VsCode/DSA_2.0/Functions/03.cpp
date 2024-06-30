#include <iostream>
using namespace std;

// Function using call by value
void fun1(int x)
{
    cout << "Inside formal argument (call by value):" << endl;
    x++; // Increment the local copy of x
    cout << "x inside fun1: " << x << endl;
}

// Function using reference
void fun2(int& x)
{
    cout << "Inside formal argument (reference):" << endl;
    x++; // Increment the original variable
    cout << "x inside fun2: " << x << endl;
}

// Function using pointer
void fun3(int* x)
{
    cout << "Inside formal argument (pointer):" << endl;
    (*x)++; // Increment the value pointed to by x
    cout << "x inside fun3: " << (*x) << endl;
}

int main()
{
    int a = 3;

    cout << "Inside the actual argument:" << endl;
    cout << "a before function calls: " << a << endl;

    fun1(a); // Call by value
    cout << "a after fun1: " << a << endl; // a is still 3

    fun2(a); // Reference
    cout << "a after fun2: " << a << endl; // a is now 4

    fun3(&a); // Pointer
    cout << "a after fun3: " << a << endl; // a is now 5

    return 0;
}
