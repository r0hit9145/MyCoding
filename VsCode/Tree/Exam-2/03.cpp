//Checking given tree is BST or not?

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

//bool isBST(node *root, int min, int max)
void isBST(node *root, int min, int max)
{
    //Base case
    if(root==NULL)
    //return true;
    return ;

    if(root->data>=min && root->data<=max)
    {
      isBST(root->left, min, root->data);
      isBST(root->right, root->data, max);
      cout<<"Given Tree yes BST : "<<endl;
      //return (left && right);
    }
    else 
    {
    //return false;
    cout<<"OOPs!, Given tree isn't BST : "<<endl;
    }
}

int main()
{
    node *root= new node(5);

    root->left= new node(4);

    root->right= new node(10);

    root->left->left= new node(3);

    root->left->right= new node(5);

    int min=INT_MIN;
    int max= INT_MAX;

    //cout<<isBST(root, min, max);
    isBST(root, min, max);
}