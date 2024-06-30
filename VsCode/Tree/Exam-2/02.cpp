//Itrative function into tree -- pre/ inorder

#include<iostream>
using namespace std;
//#include<stack>
class node
{
    public:
    int key;
    node *left;
    node *right;

    node(int val)
    {
        this->key=val;
        cout<<&val<<endl;
        this->left=NULL;
        this->right=NULL;
    }
};

//ItrativeInorder--
void *ItrativeInorder(node *root)
{
    cout<<root->key<<endl;
    cout<<root->key;
    // cout<<"Step-8"<<endl;
    // //node *root=NULL;

    // if(root==NULL)
    // {
    //     cout<<"Step-9"<<endl;
    // return 0;
    // }

    // node *current=root;
    // cout<<current->key<<"  ";
    //using stack is best also without STL
    // node *stack[100];
    // int top=-1;
    
    // while(current || top>=0)
    // {
    //     while(current)
    //     {
    //         stack[++top]=current;
    //         current= current->left;

    //     }

    //     current= stack[top--];
        //ItrativeInorder(current->left);
        //cout<<current->key<<" ";

       // ItrativeInorder(current->right);
        //cout<<current->key<<" ";

        // current= current->right;
    // }

}


int main()
{
    cout<<"Step-1"<<endl;

    node *root=new node(0);
    cout<<root->key<<endl;

    cout<<"Step-2"<<endl;

    root->left= new node(1);
    node *n2=root->left;
    cout<<n2->key<<endl;

    cout<<"Step-3"<<endl;

    root->right= new node(2);
    cout<<root->key<<endl;

    cout<<"Step-4"<<endl;

    root->left->left= new node(3);
    cout<<root->key<<endl;

    cout<<"Step-5"<<endl;

    root->left->right= new node(4);
    cout<<root->key<<endl;

    cout<<"Step-6"<<endl;
    cout<<"Step-7"<<endl;

    ItrativeInorder(root);
}