//Itself did it.
//Operations performed !!!!!!

/*

1. Build A Tree
2. Tree-- Traversal
3. Actual Tree build
4. In0rder || Pre0rder || Post0rder

*/
#include<iostream>
#include<queue>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node(int n)
    {
        this->data=n;
        this->left=NULL;
        this->right=NULL;
    }
};

node* Build_Tree(node* root)

//        OR

// void * Build_Tree(node* root)
{
    int data;
    //Mujhe data chaiye to ? Constructor is good.
    cout<<"Enter the data :"<<endl;
    cin>>data;
    node *temp1= new node(data);

    cout<<temp1->data;
    if(data==-1)
    {
    return NULL;
    }
    
    cout<<"\nEnter the left child :"<<data<<endl;
    temp1->left=Build_Tree(temp1->left);
    cout<<"\nEnter the right child :"<<data<<endl;
    temp1->right=Build_Tree(temp1->right);

    return temp1;
}


//Level Order Traversal R------------------->L
void Level_Order_Traversal(node *root)
{
    queue<node*> q;
    q.push(root);

    //Putting inside the queue NULL
    q.push(NULL);


    while(!q.empty())
    {
        node *tm= q.front();
        q.pop();

        if(tm==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout<<tm->data<<" ";
            if(tm->left)
        {
            q.push(tm->left);
        }

        if(tm->right)
        {
            q.push(tm->right);
        }
        }
    }
}

void Inorder(node *root)
{
    //base condition
    if(root==NULL)
    {
        return ;
    }

    else
    {
    Inorder(root->left);
    //***********************************
    cout<<root->data<<"  ";
    //**********************************
    Inorder(root->right);
    }
}

void Pre_Order(node *root)
{
    //base condition
    if(root==NULL)return ;

    //***********************************
    cout<<root->data<<"  ";
    //**********************************
    
    Pre_Order(root->left);
    Pre_Order(root->right);
}

void Post_Order(node *root)
{
    //base condition
    if(root==NULL)return ;

    Post_Order(root->left);
    Post_Order(root->right);

    //***********************************
    cout<<root->data<<"  ";
    //**********************************
}

int main()
{
    system("cls");

    node *root=NULL;                                    //let's run it ?  :)

    cout<<"Simple Build A Tree :"<<endl;
    //Mujhe data chaiye to ? Constructor is good.
    root=Build_Tree(root);

    cout<<"Level Order Traversal :"<<endl;
    Level_Order_Traversal(root);

    //Operations Performs.
    cout<<"\n\nIn_0rder : \n"<<endl;
    Inorder(root);

    cout<<"\n\nPre_0rder :"<<endl;
    Pre_Order(root);

    cout<<"\n\nPost_0rder :"<<endl;
    Post_Order(root);
}
//5 3 4 -1 -1 2 -1 -1 1 -1 -1