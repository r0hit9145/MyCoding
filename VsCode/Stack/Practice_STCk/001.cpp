//There are some operation in stack to inplement it.
//empty(), size(), top(), push(g), pop()-----TC- 0(1)
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<long long int> st1;
    int x=23;
    cout<<x<<" ";
    st1.push(1);
    st1.push(3);
    st1.push(67);
    st1.push(5);

    stack<int> temp;
    while(st1.empty())
    {
        temp.push(st1.top());
        st1.pop();
        cout<<temp.top()<<" ";
        //temp.pop();
        temp.pop();
    }
    return 0;
}