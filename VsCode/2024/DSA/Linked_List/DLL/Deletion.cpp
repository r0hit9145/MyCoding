// Double linked list.
/*
Deletion: 
head of the linked list.
tail of the linked list.
kth position linked list.
*/
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    // next pointer
    Node*next;
    // back pointer
    Node*back;

    Node(int val): data(val), next(NULL),back(NULL){}

    Node(int val, Node*next1, Node*back1)
    {
        this->data=val;
        this->next=next1;
        this->back=back1;
    }
};

// Double linked list.
Node*CrrDDLL(Node*head, vector<int> &arr)
{
    head=new Node(arr[0]);
    // i need one previous node.
    Node*prev=head;
    for(int i=1; i<arr.size(); i++)
    {
        Node*temp=new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

// deleting head of the linked list node.
Node*DeletingHead(Node* head)
{
    if(head==nullptr || head->next==nullptr)
    {
        return nullptr;
    }
    // before storing the head into prev.
    Node *prev=head;
    head=head->next;
    
    // now to give sperated nullptr.
    head->back=NULL;
    prev->next=nullptr;

    delete prev;
    return head;
}

// Deleting tail of the linked list.
Node *DeletedTail(Node* head)
{
    if(head==NULL || head->next==nullptr){
        return nullptr;
    }
    Node *tail=head;
    Node *prev=head;
    while(tail->next!=nullptr)
    {
        tail=tail->next;
    }
    // now we have to delete the tail element.
    // before to store it to remove.
    prev=tail->back;
    tail->back=NULL;
    prev->next=nullptr;
    delete tail;

    return head;

}
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=NULL;
    vector<int> arr={12, 34, 11, 45, 67};
    head=CrrDDLL(head, arr);
    print(head);

    // Deleted head node.
    // head=DeletingHead(head);
    // print(head);

    // Deleted tail node.
    head=DeletedTail(head);
    print(head);
}