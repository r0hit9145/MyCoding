// insertion- at head position
#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *back;

    // constructor called one paramerter
    Node( int data, Node *next=NULL): data(data), next(nullptr){}

    // two paramerter constructor called.
    Node(int val, Node *next1, Node *back1){
        this->data=val;
        this->next=next1;
        this->back=back1;
    }
};

// DLL
Node *DLL(vector<int> & arr)
{
    // creation of the first head node.
    Node *head= new Node(arr[0]);
    // not good practice to temper to head, so?
    Node* prev=head;
    for(int i=1; i<arr.size(); i++)
    {
        // creation of new node.
        Node *temp=new Node(arr[i], nullptr, prev);
        // next connnectivity?
        prev->next=temp;
        // picked pos a prev to the temp?
        prev=temp;
    }
    return head;
}

// Insertion_F_head
Node *InsertionHead(Node *head){
    // user input ?
    int key=0;
    cout<<"Which is the node you want to add at first:"<<endl;
    cin>>key;
    // first added.
    Node *first=new Node(key, head);
    first=first->next;
    // cout<<first->data<<endl;
    return first;

}
// print DLL
void print(Node *head)
{
    // optional but good practice to do that.
    Node *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    Node *head=NULL;
    vector<int> arr={12, 34, 56, 78, 90};
    head= DLL(arr);
    print(head);

    // at Head position
    head= InsertionHead(head);
    print(head);
}