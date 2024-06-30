//Double linked list.
#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node*next;
    Node*back;

    // Constructor called:
    Node(int val): data(val), next(NULL), back(NULL){}

    // Second constructor called:
    Node(int val,Node*next1, Node*back1)
    {
        this->data=val;
        this->next=next1;
        this->back=back1;
    }
};

// Created Double linked list.
Node *CrrDLL(vector<int> &arr, Node *head)
{
    // head pointer
    head=new Node(arr[0]);
    // prev one is also.
    Node *prev=head;
    for(int i=1; i<arr.size(); i++)
    {
        Node *temp=new Node(arr[i], nullptr, prev);
        {
            prev->next=temp;
            prev=temp;
        }
    }
    return head;
}

// Printing the list.
void print(Node* head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main()
{
    Node *head=0;
    vector<int> arr={12, 34, 11, 45};
    //Node *check= CrrDLL(arr, head);
    head=CrrDLL(arr,head);
    print(head);
}