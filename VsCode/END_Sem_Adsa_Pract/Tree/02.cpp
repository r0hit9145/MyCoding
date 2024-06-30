//Creating a BST Tree------

//        50
//       /  \
//     30    44
//    /  \     \
//  10   12     45
//       /
//     11

#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node*right;
    
    Node(int i)
    {
        this->data=i;
        this->left=NULL;
        this->right=NULL;
    }
};

void Insertion(Node *&root, int val)
{
    //Node *temp= new Node(val);
    if(root==NULL)
    {
        root= new Node(val);
    return ;
    }
    
    //cout<<root->data;
    if(val>root->data)
    {

        //cout<<root->data<<" ";
        Insertion(root->right, val);
    }
    
    if(val<root->data)
    {
        //cout<<root->data<<" ";
        Insertion(root->left, val);
    }
}

// void Inordered(Node *&root)
// {
//     if(root==NULL)
//     return ;

//     Inordered(root->left);
//     if(root==NULL)
//     cout<<endl;
//     cout<<root->data<<" ";
//     Inordered(root->right);
// }


void Structure_formar_tree(Node *root)
{
    //we have to need to store the data ?
    //best to take a queue
    queue<Node*> q;

    //push the data first
    q.push(root);
    

    //pushing a sperater
    q.push(NULL);
    while(!q.empty())
    {
        Node *temp= q.front();
        
        //when we need not to use the structure
        //cout<<temp->data<<"->   ";


        q.pop();

        if (temp==NULL)
        {
            //need to be endl
            cout<<endl;

            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<"  ";
        //call rr.
        if(temp->left)
        {

        //Structure_formar_tree(root->left);
        q.push(temp->left);
        }

        if(temp->right)
        {
        //Structure_formar_tree(root->right);
        q.push(temp->right);
        }
        }
    }
}

int main()
{
    Node *root=NULL;
    
    Insertion(root, 50);
    //cout<<root->data<<" ";
    Insertion(root, 30);
    Insertion(root, 10);
    Insertion(root, 12);
    Insertion(root, 44);
    Insertion(root, 11);
    Insertion(root, 45);

    //Inordered(root);
    Structure_formar_tree(root);
}
