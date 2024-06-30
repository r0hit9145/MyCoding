// call by value, address(pointer), reference.
//  I used an array

#include <iostream>
using namespace std;

// function, call by value with no return type.

void fun1(int *x)
{
    cout << "Inside formal arguments :" << endl;
    x++;
    // x++;
    // y++;
    // z++;
    // z--;
    // f++;
    // g++;
    cout << x<<endl;
    cout<<x++;
    //  << "-" << y << "-" << z << "-" << f << "-" << g << endl;
}
// int main body
int main()
{
    cout <<endl<< "Inside the artual arguments :" << endl;
    int a=3, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout<<endl<<a;
    //fun1(a, b, c, d, e); // ordinary variable
    fun1(&a); // reference variable
    cout<<"Took effect :"<<endl;
    cout << a<<endl ;
    cout<<a;
    // << "-" << b << "-" << c << "-" << d << "-" << e << endl;
}
