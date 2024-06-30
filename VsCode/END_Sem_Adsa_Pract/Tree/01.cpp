//creating a simple tree structure of one node.

//12 10 9 -1 -1 -1 13 -1 -1

//     12
//    /  \
//   10  13
//  /    
// 9     

#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left=NULL;
    Node*right=NULL;
    
    Node(int a)
    {
        this->data=a;
        this->left=NULL;
        this->right=NULL;
    }
};

//Simple build the tree
Node *Build_tree(Node *root)
{
    //data;
    cout<<"Enter the root "<<endl;
    int data;
    cin>>data;
    //one new memory creating
    if(data==-1){return NULL;}
    
    Node *new_one= new Node(data);
    cout<<new_one->data<<endl;
    
    //left-tree
    cout<<"Left --"<<data<< endl;
    new_one->left= Build_tree(new_one->left);
    
    //Right--tree
    cout<<"right --"<<data<<endl;
    new_one->right= Build_tree(new_one->right);
    
    return new_one;

}


//Now building the tree of structure wise.

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
            cout<<temp->data<<" ";
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

//Preorder Traversal

void Preorder(Node *root)
{
    //Root---L----R
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";

    // if(root->left)
    {
    Preorder(root->left);
    // if(root->left)
    // {
    //     root->left;
    // }
    }
    // if(root->right)
    {
    Preorder(root->right);
    //  if(root->right)
    // {
    //     root->right;
    // }
    }
}

int main()
{
    Node *root;
    //Creating a tree
    root= Build_tree(root);

    //structure of the tree
    Structure_formar_tree(root);

    //Preorder Traversal
    Preorder(root);
}