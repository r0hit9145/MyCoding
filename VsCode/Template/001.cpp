//Template using 
#include<iostream>
//#include<vector>
using namespace std;

//Using template

template <typename t1, typename t2, typename t3>

//For the integer values.
// int Mymax(int a, int b)
// {
//     return (a>b)? a:b; 
// }

int Mymax(t1 a, t2 b, t3 c)
{
    return (a>b)? a:b;
}




int main()
{
    cout<<Mymax<int,float, double>(3,7.012f, 668.88l);
    //cout<<Mymax('r', 'e');
}