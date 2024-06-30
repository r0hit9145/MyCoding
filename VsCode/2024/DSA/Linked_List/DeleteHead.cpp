//Delete at the start point node.
#include<iostream>
#include<vector>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;

    Node(int val): data(val), next(nullptr)
    {}
};

//a created linked list.
Node* CreateLL(vector<int> &arr)
{
    Node *head= new Node (arr[0]);
    Node *mover=head;
    cout<<mover->data<<" ";
    int i=1;
    for(i=1; i<arr.size(); )
    {
        Node *temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        cout<<temp->data<<" ";
        i++;
    }
    cout<<endl;
    return head;
}

// Delete a head node from the linked list.
// Node * DeleteHeadLL(Node * &head)
// {
//     if(head==NULL)return head;
//     Node *delHead= head;
//     cout<<head->data<<" is deleted successfully!"<<" "<<endl;
//     head=head->next;
//     delete delHead;
//     return head;
// }

// Print tail function
void *printTail(Node *head)
{
    Node *temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node *DeleteTail(Node *head)
{
    Node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp=temp->next;//this line comes up with that.
    delete(temp->next); // OR free(temp->next);
    temp->next=NULL;
    cout<<temp->data<<" is deleted successfully!"<<endl;
    return head;
}

int main()
{
    vector<int> arr={12, 3, 5, 6, 7,55};
    //arr2LL
    Node *head= CreateLL(arr);
    // deleteHead node
    //Node *trial= DeleteHeadLL(head);
    //        OR
    // head=DeleteHeadLL(head);
    // Node *temp=head;
    // while(temp!=NULL)
    // {
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;
    // deletedTail node
    head= DeleteTail(head);
    // Printing tai function .
    printTail(head);

}