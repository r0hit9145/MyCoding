/*To find a height of the tree
1. Build A Tree
2. Tree-- Traversal
3. Actual Tree build
4.calculating height of the tree.
*/
#include<iostream>
#include<queue>
#include<climits>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    //using a constructor 
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

//Building a tree
node *Build_Tree(node *root)
{
    cout<<"\nEnter the data :\n";
    //mujhe ek data chaiye

    int data;

    cin>>data;
    //ek new node le leta hu jo data lake dega using constructor

    //node *temp= new node(data);
    root= new node(data);

    //base condition
    if(data==-1)return 0;
    //kab tak?
    cout<<"\nEnter the left :\n"<<data;
    //dono our recursion call
    root->left=Build_Tree(root->left);

    cout<<"\nEnter the right :\n"<<data;
    //dono our recursion call
    root->right=Build_Tree(root->right);

    return root;
}

void Printing_data(node *root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<"Printing the data :"<<root->data<<endl;
    Printing_data(root->left);
    Printing_data(root->right);
}

// void Level_Order_Traversal(node *root)
// {
//     queue<node*> q;
//     q.push(root);

//     //Putting inside the queue NULL
//     q.push(NULL);


//     while(!q.empty())
//     {
//         node *tm= q.front();
//         q.pop();

//         if(tm==NULL)
//         {
//             cout<<endl;
//             if(!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }

//         else
//         {
//             cout<<tm->data<<" ";
//             if(tm->left)
//         {
//             q.push(tm->left);
//         }

//         if(tm->right)
//         {
//             q.push(tm->right);
//         }
//         }
//     }
// }

int height(node *root)
{
    int left,right;
    //base case
    if(root==NULL)
    {
        return 0;
    }
    else
    {
    left=height(root->left);
    right=height(root->right);

    // if(left>right){return left+1;}
    // else{return right+1;}
    // return max(left, right)+1;
    }
    return max(left, right)+1;
}

int main()
{
    system("cls");

    node *root=NULL;
    // node *root= new node(3);
    // root->left = new node(2);
    // root->right = new node(2);
    // root->left->left = new node(2);

    root=Build_Tree(root);
    Printing_data(root);

    //find out the height of a tree.
    cout<<"\n\nMY tree height is :\n";
    //Level_Order_Traversal(root);
    cout<<height(root);
    //cout<<result<<" ";
    return 0;
}
//      3 2 5 -1 -1 -1 10 -1 -1