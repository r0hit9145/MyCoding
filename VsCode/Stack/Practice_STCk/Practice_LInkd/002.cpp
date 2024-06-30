//Implementing stack using linked list-- speration is good to implement stack using linked list.
#include<iostream>
#include<stack>
using namespace std;

class Node
{
    public:
    int data;
    Node *link;

    Node(int data)
    {
        this->data=data;
        this->link=NULL;
    }
};

class Stack
{
    public:
    Node *top;
    //Constructor calling.........
    Stack()
    {
        this->top=NULL;
    }

    //a Creating node
    void push(int d)
    {
        //creating a new node inside the stack
        Node *newnode= new Node(d);
        cout<<newnode<<endl;
        newnode->link= top;
        //cout<<newnode->data<<" ";
        top= newnode;
    }

    //Display the all nodes
    void Display()
    {
        Node *tmp;
        tmp=top;
        //firstly checked stack
        // if(!top==NULL)
        // {
        //     cout<<"Stack is underflow !"<<endl;
        //     exit(1);
        // }

        //else
        {
            while(tmp!=NULL)
            {
                cout<<tmp->data<<"  ->";
                tmp= tmp->link;
            }
        }
    }
};

int main()
{
    Stack s;
    //Node *root=NULL;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.Display();
}