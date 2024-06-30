// Linked list- operation
/*
Deletion:
at the first.
at the end.
at the index.
at the element.
*/

#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    
    Node(int val): data(val), next(nullptr){}

    Node(Node *next, int val): next(next), data(val){}
};

// creation of the linked list.
// Without loop as like use goto statement- but not best practice.

Node *CRRLL(Node * &head, vector<int> & arr)
{
    head=new Node(arr[0]);
    Node *mover=head;
    for(int i=1; i<arr.size(); i++)
    {
        Node *temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }    

    return head;
}

// Deleting the at end node;
Node *deleteEnd(Node * &head)
{
    Node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    //delete temp;
    temp->next=NULL;
    return head;
}

// Deleted from the particular position- 0, 1 , 2, 3 which one?
Node *DeletedPos(Node *head, int k=3)
{
    // prev, temp, count;
    int cnt=1;
    Node *temp=head;
    Node *prev=head; // OR prev=NULL;
    while(temp!=NULL)
    {
        if(cnt==k)
        {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
        cnt+=1;
    }
    return head;
}

// deleted the element.
Node *DeletELEMENT(Node *head, int key)
{
    // if key==no;
    if(head==NULL)return head;

    // if key==1 at least one value.
    if(head->next==NULL)return head=head->next;


    // prev, temp, cont-don't need.
    Node *temp=head;
    Node *prev=nullptr;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            prev->next=prev->next->next;// very important note.
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
void PrinLL(Node * &head)
{
    Node *temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=NULL;
    vector<int> arr={1, 2, 14, 6};
    // array into linked list
    head= CRRLL(head, arr);
    // PrinLL(head);

    // deleted node at end position.
    // head=deleteEnd(head);
    // PrinLL(head);

    // deleted at the index.
    // head=DeletedPos(head, 3);
    // PrinLL(head);

    // deleting at the element.
    head=DeletELEMENT(head, 14);
    PrinLL(head);

    //
}