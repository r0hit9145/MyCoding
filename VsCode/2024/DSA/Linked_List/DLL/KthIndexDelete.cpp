// Double linked list-- kth Index deleting.
// Deleted Kth index - DLL.
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *back;

    Node(int val): data(val), next(nullptr){}

    Node(int val, Node *next1, Node *back1)
    {
        data=val;
        next=next1;
        back=back1;
    }
};

// DLL
Node *DLL(Node *head, vector<int> &arr){
    head=new Node(arr[0]);
    Node *prev=head;
    for(int i=1; i<arr.size(); i++)
    {
        Node *temp=new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}


// kth index deleted.
Node *delKth(Node *head, int k)
{
    Node *prev=head;
    int cnt=0;
    Node *temp=head->next;
    while(temp!=nullptr)
    {
        cnt++;
        if(cnt==k)
        {
            // alag se
            Node *deleted=prev;
            prev=prev->back;
            prev->next=temp;
            temp->back=prev;

            // finally deleted the node.
            deleted->next=nullptr;
            deleted->back=nullptr;
            delete deleted;
        }
        prev=prev->next;
        temp=temp->next;
    }
    return head;
}
// printed.
void print(Node *head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


int main()
{
    vector<int> arr={12, 13, 45, 56, 55, 78, 99};
    Node *head=nullptr;
    head=DLL(head, arr);
    print(head);

    // deletedKth
    int k=6;
    head=delKth(head, k);
    print(head);
    return 0;
}