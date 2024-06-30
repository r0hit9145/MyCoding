//To know about the stack
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //Creation of the stack
    stack<int> s;

    //Push operation
    s.push(2);
    s.push(3);

    //Pop operation
    s.pop();

    //Now printing the element
    cout<<"At the top :"<<s.top()<<endl;

    //Checking stack, is empty or not
    if(s.empty())
    {
        cout<<"Stack is empty :"<<endl;
    }
    else
    {
        cout<<"Stack is not empty :"<<endl;
    }
    
    //Check the size
    cout<<s.size()<<endl;


    return 0;
}