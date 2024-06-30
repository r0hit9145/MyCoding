//using linked list-- single linked list

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *ptr;

    Node(int val)
    {
        this->data= val;
        this->ptr=NULL;
        
        //cout<<data<<" ";
        //cout<<ptr<<endl;
    }

    void inserting(Node *root, int val)// int arr[], int val
    {
        //dynamic memory allcotion type
        //Node *new_one= new Node(val);
        //root= new Node (val);

        Node *creation= new Node(val);

        creation->ptr= root;
        root= creation;

        cout<<creation->data<<endl;




    }
};

int main()
{
    //create a root node
    Node *root=NULL;
    //int val=23;


    //root->inserting(root, val);

    for( int i=0; i<5; i++)
    {
        int val;
        cout<<"Enter the node ";
        cin>>val;

        root->inserting(root, val);
    }
    cout<<root->data<<endl;
}