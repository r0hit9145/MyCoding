// Insertion.
/*
Insertion:
at the first.
at the end.
at the index.
at the position[Element].
*/
#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int val): data(val), next(NULL){}

    Node (Node *next, int key): next(next), data(key){}
};

// creation of the linked list.
Node *CrrLL(Node *head, vector<int> &arr)
{
    head=new Node(arr[0]);
    Node *mover=head;
    for(int i=1; i<arr.size(); i++)
    {
        Node *temp=new Node(arr[i]);
        mover->next=temp;// connecting the link.
        mover=temp;// taking next place. OR mover=mover->next;
    }
    return head;
}


// Inserted at first position.
Node *InsertHead(Node *head, int val)
{
    // supposed new element =11;
    // Node *temp=new Node(head, val); return temp;
    //    OR 
    Node *temp=new Node(val);
    temp->next=head;// Step 1: Point new node to the current head
    //head=temp;// Step 2: Update head to the new node
        // OR
    //head = temp;, if direct temp return then not need.

    // Optionally, you can print the data of the new head here
    // cout << temp->data << endl;


    // cout<<temp->data<<endl;
    return temp;
}

// at the tail 
Node *InsetionTail(Node * &head, int lastnode)
{
    // at the empty.
    if(head==NULL)
    {
        return head=new Node(lastnode);
    }
    // never ever temp. the node.
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    // at the last node.
    Node *Lsnode=new Node(lastnode);
    temp->next=Lsnode;
    return head;
}

// Kth position - element inserted.
Node *KthelementInsert(Node *head, int el, int k)
{
    int cnt=0;
    // if it is not node.
    if(head==NULL)
    {
        if(k==1)
        {
        cnt+=1;
        return new Node(el);
        }
    }
    Node *temp=head;
    // if you are inserting at the first.
    if(k==1)
    {
        return temp=new Node(head, el);
    }

    while(temp!=NULL)
    {
        cnt+=1;
        if(cnt==(k-1))
        {
            Node *x=new Node(temp->next, el);//store the next one
            //  OR
            // Node *x=new Node(el);
            // x->next=temp->next;
            temp->next=x;//then connect it to next.
            break;// optinal
        }

        temp=temp->next;
    }
    return head;

}
void PPLL(Node*head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=NULL;
    vector<int> arr={12, 43, 56, 78, 33};
    head=CrrLL(head, arr);
    PPLL(head);

    // at the first position.
    // head=InsertHead(head, 11);
    // PPLL(head);

    // inserting at tail.
    // head=InsetionTail(head, 555);
    // PPLL(head);

    // kth position.
    head=KthelementInsert(head, 123, 1);
    PPLL(head);

    // same as if you insert values.
}