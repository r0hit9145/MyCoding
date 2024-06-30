#include<iostream>
#include<queue>
using namespace std;

class Tree
{
    public:
    int data;
    Tree *left;
    Tree *right;

    Tree(int d)
    {
        data=d;
        this->left=NULL;
        this->right=NULL;
    }

};

Tree  *buildTree(Tree *root)
{
    cout<<"Enter data : "<<endl;
    int item;
    cin>>item;

    if(item==-1)
    return NULL;
    root= new Tree(item);

    cout<<root->data<<" ";

    //left
    cout<<"Enter left "<<item<<endl;
    buildTree(root->left);

    cout<<"Enter right "<<item<<endl;
    buildTree(root->right);

    return root;
}

void Make_structure_Tree(Tree *root)
{
    queue<Tree*> q;
    q.push(root);

    while(!q.empty())
    {
        //int store= q.front();
        Tree *temp= q.front();
        cout<<temp->data<<endl;
        q.pop();

        if(temp->left)
        {
            q.push(temp->left);
        }

         if(temp->right)
        {
            q.push(temp->right);
        }
    }

}

int main()
{
    Tree *root=NULL;

    root= buildTree(root);

    Make_structure_Tree(root);
}

/// 0 1 2 -1 -1 3 -1 -1 4 -1 -1