// creating a binary tree- simple one node created
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *Left;
    node *Right;

    //Constructor is called
    node(int data)
    {
        this->data= data;
        this->Left=NULL;
        this->Right= NULL;
    }
};

int main()
{
    system("cls");
    int d;
    //A pointer is pointed to its node
    node *root;
    //a creating one node in binary tree
    cout<<"Enter your root node :"<<endl;
    cin>>d;
    if(d==-1)
    {
        cout<<"There is no node is existed :"<<endl;
        return 0;
    }
    root= new node(d);// data passsint to node- root point.
    cout<<root->data<<endl;

    cout<<"Do you want to left child :"<<endl;
    root->Left=NULL;
    cout<<root->Left<<endl;
    
    cout<<"Do you want to Right child :"<<endl;
    root->Right=NULL;
    cout<<root->Right;
}
