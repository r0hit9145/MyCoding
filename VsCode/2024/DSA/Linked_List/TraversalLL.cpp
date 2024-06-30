//Traversal in linked list.
#include<iostream>
#include<vector>
using namespace std;

class Node 
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data= data;
        this->next=NULL;
    }
};

// Converting the array into linked list.
Node* Convert_array_2_LL(vector<int> &arr)
{
    // Node head= Node (arr[0]);
    //  OR
    Node *head= new Node (arr[0]);
    Node *mover=head;
    cout<<mover->data<<" ";
    for(int i=1; i<arr.size(); i++)// i=1 is important in.
    {
        Node *temp= new Node (arr[i]);
        cout<<temp->data<<" ";
        mover->next=temp;
        mover=temp;
    }
    return head;
}

// Length of the linked list?
int LengthLL(Node *head)
{
    int count=0;
    Node *temp= head;
    while(temp!=nullptr)
    {
        temp=temp->next;
        count+=1;
    }
    cout<<endl;
    return count;
}


int main()
{
    //already we have our data in the form the array.
    vector<int> arr={12, 34, 5, 6, 7};
    //Conarr2LL
    Node *returnHead= Convert_array_2_LL(arr);
    //Node *mover=returnHead;
    // while(mover)
    // {
    //     cout<<mover->data<<" --> ";
    //     mover= mover->next;
    // }

    int total_length= LengthLL(returnHead);
    cout<<total_length<<endl;
}