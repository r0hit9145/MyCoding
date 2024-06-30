//Implementing a Queue using 2 stacks------------->
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Queue
{
    public:
    stack<int> s1,s2;
    void enQueue(int x)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        
        s1.push(x);

        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int Dequeue()
    {
        // while(!s1.empty())
        // {
            //cout<<s1.top()<<" ";
            int x= s1.top();
            s1.pop();
            return x;
        
    }

};

int main()
{
    Queue q;
    q.enQueue(10);
    q.enQueue(12);
    q.enQueue(14);

    for(int i=0; i<3; i++)
    {
        int ans= q.Dequeue();
        cout<<ans<<" ";
    }
    //cout<<ans<<" ";
    //cout<<ans<<" ";
}