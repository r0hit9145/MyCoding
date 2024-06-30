//Given tree is BST not not?

#include<iostream>
#include<climits>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node(int value)
    {
        this->data= value;
        this->left=NULL;
        this->right= NULL;
    }
};

bool isBST(node *root, int min, int max)
{
    //Base case
    if(root==NULL)
    return true;

    if(root->data>min && root->data<max)
    {
      bool left= isBST(root->left, min, root->data);
      bool right= isBST(root->right, root->data, max);

      return (left && right);
    }
    else 
    {
    return false;
    }
}

node*BuildTree(node*root)
{
int d;
cout<<"Enter the data :"<<endl;
cin>>d;
if(d==-1)
{
    return NULL;
}
    root=new node(d);
    if(root==NULL)
    return NULL;
    cout<<" enter the data in the left of ->"<<d<<endl;
    root->left= BuildTree(root->left);

    cout<<" enter the data in the right of ->"<<d<<endl;
    root->right= BuildTree(root->right);

    return root;
}

int main()
{
    node *root=NULL;

    root= BuildTree(root);
    // node *root= new node(20);

    // root->left= new node(11);

    // root->right= new node(55);

    // root->left->left= new node(9);

    // root->left->right= new node(13);

    int min=INT_MIN;
    int max= INT_MAX;

    bool var= isBST(root, min, max);
    if(var==1)
    cout<<"BST"<<endl;
    else
    cout<<"Not BST:"<<endl;
}