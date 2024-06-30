//Queue implementation
#include<iostream>
using namespace std;

class Queue
{
    public:
    int *arr;
    int qfront;
    int rear;
    int size;

    Queue(int size)
    {
        
        arr= new int [size];
        qfront=0;
        rear=0;
    }

    //Push data
    void enqueue(int element)
    {
        if(rear==size)
        {
            cout<<"Queue has already fulled! "<<endl;
        }

        else
        {
            arr[rear]=element;
            cout<<arr[rear]<<"  ";
            rear++;
        }
    }

    //Pop the data
    void dequeue()
    {
        if(qfront== rear)
        {
            cout<<"Queue is empty! "<<endl;
        }
        else
        {
            arr[qfront]=-1;
            cout<<"Successfully poped !"<<"  ";
            qfront++;

            if(qfront== rear)
            {
                qfront=0;
                rear=0;
            }


        }
    }

    //check front
    void front()
    {
        if(qfront==rear)
        {
            cout<<"Empty :";
        }
        else
        cout<<arr[qfront];
    }

};



int main()
{
    Queue q(5);

    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(11);


    q.dequeue();
    q.front();
}