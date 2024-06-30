//Converting a decimal number into binary, pending to reverse using stack.
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int num, rem=0;
    stack<int> s;
    cout<<"Enter the decimal number: "<<endl;
    cin>>num;

    while(num>0)
    {
        rem= num%2;
        s.push(rem);
        num= num/2;
    }
}