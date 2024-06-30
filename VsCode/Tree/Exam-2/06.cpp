#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
};

//Build Tree
node*BuildTree(node*root)
{
    
}