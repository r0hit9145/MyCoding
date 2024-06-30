//Queue implementation
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //Creation of the queue
    queue <int> q;
    cout<<q.empty();
    //Push operation
    q.push(11);

    cout<<"Q. front ? "<<q.front()<<endl;

    q.push(15);
    
    cout<<"Q. front ? "<<q.front()<<endl;

    q.push(13);
    
    cout<<"Q. front ? "<<q.front()<<endl;

    cout<<"Size of the Queue :"<<q.size()<<endl;

    //Pop operation
    q.pop();

    cout<<"Size of the Queue :"<<q.size()<<endl;

    //Check that queue is empty or not
    if(q.empty())
    {
        cout<<"Queue is empty !"<<endl;
    }
    else
    cout<<"Queue is not empty !"<<endl;
    return 0;
}