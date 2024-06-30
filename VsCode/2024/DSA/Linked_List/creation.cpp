//Creation of the linked list- Convert arr to linked list.
#include<iostream>
#include<vector>
using namespace std;

class Node 
{
    public:
    //data or next pointer
    int data;
    Node *next;

    Node (int data)
    {
        this->data=data;
        this->next=nullptr;

    }

};

//Array into linked list converted.

// Without loop as like use goto statement- but not best practice.

Node *CRRLL(Node *head, vector<int> & arr)
{
    head=new Node(arr[0]);
    // cout<<head->data<<" head->data "<<endl;
    // cout<<head->next<<" head->next "<<endl;
    Node *mover=head;
    // cout<<mover->data<<" mover->data "<<endl;
    // cout<<mover->next<<" mover->next "<<endl;
    // for(int i=1; i<arr.size(); i++)
    // {
        int i=1;
        p:
        Node *temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        ++i;

        if(i<arr.size())
        {
            goto p;
        }
        
    
    return head;
}

//          OR     with loop statements.

Node *conArr2LL(vector<int> & arr)
{
    //creating a node
    Node *head= new Node(arr[0]);
    //for the changes to need a mover
    Node *mover= head;
    for(int i=1; i<arr.size(); i++)
    {
        Node *temp= new Node (arr[i]);
        //aage badao.
        mover->next=temp;
        mover=temp; //or //mover= mover->next;
        cout<<temp->data<<endl;
        //cout<<temp->next<<endl;
    }
    return head;
} 

// printing the list
void PrintLL(Node *head)
{
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main()
{
    vector<int> arr= {1, 3, 4, 5};
    Node *head=nullptr;
    head=conArr2LL(arr);
    PrintLL(head);

        //OR:
    //try a node intialization
    // Node *head= new Node(arr[1]);
    // cout<<head->data<<endl;
    // // cout<<head->next<<endl;
    // for(int i=1; i<arr.size(); i++)
    // {
    //     //make a new object that helps.
    //     Node *temp= new Node(arr[i]);
    //     head->next= temp;
    //     head=temp;
    //     cout<<temp->data<<endl;
    // }
}