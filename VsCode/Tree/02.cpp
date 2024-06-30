// //Build Tree ---- creating a simple node format;
// #include<iostream>
// using namespace std;

// class node 
// {
//     public:
//     int data;
//     node *Left;
//     node* Right;

//     //Using a constructor to create a node
//     node(int data): data(data), Left(nullptr), Right(nullptr)
//     {
//         // data=data;
//         // Left=NULL;
//         // Right=NULL;
//     }
    
// };

//                                        //outside declaration______________________
//    node* BuildTree()
//    {
//         int data;
//         //creating a node at first index
//         cout<<"Enter your first node: "<<endl;
//         cin>>data;


//         node *root= new node(data);

//         //base case, where you want to stop it.
//         if(data==-2)
//         {
//             return NULL;
//         }

//         cout<<"Enter your left child: "<<data<<endl;
//         root->Left=BuildTree();

//         cout<<"Enter your right child: "<<data<<endl;
//         root->Right=BuildTree();    
//    }

//        //Level order traversal
//     //    void Level_Order_Traversal()
//     //    {

//     //    }





// int main()
// {
    
//     system("cls");
//     //may be possible that starting root node is empty
//     node *root=NULL;

//     //What is now?
//     //Recursive approavh follow
//     root=BuildTree();
//     //Level_Order_Traversal();

// }


#include <iostream>
#include<vector>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Build a tree
    node *buildTree(node *root)
    {
        // Creating a node;
        cout << "Enter your data: ";
        int data;
        cin >> data;

        if (data == -1)
        {
            return NULL;
        }

        // Create the current node
        root = new node(data);

        // Recursively build the left and right subtrees
        cout << "Enter data to insert at left of " << data << endl<<": ";
        root->left = buildTree(root->left);

        cout << "Enter data to insert at right of " << data << endl<<": ";
        root->right = buildTree(root->right);

        return root;
    }

    //Level 0rder Traversal
    void Level_0rder_Traversal_Left_To_Right(node *root)
    {
        queue<node*> q1;

        q1.push(root);

        while(!q1.empty())
        {
            node *temp= q1.front();//front-->starting node.
            cout<<temp->data<<" ";
            q1.pop();


            if(temp->left)
            {
                q1.push(temp->left);
            }

            if(temp->right)
            {
                q1.push(temp->right);
            }
        }
    }

    void Level_Right_Left(node *root)
    {
        queue<node *> d;
        d.push(root);

        while(!d.empty())
        {
            node *temp1= d.front();
            cout<<temp1->data<<" ";
            d.pop();

            if(temp1->right)
            {
                d.push(temp1->right);
            }

            
            if(temp1->left)
            {
                d.push(temp1->left);
            }
        }
    }

int main()
{
    system("cls");
    node *root = NULL; // Initially, root is NULL

    // Create the root of the tree
    root=buildTree(root);

    // Level-order traversal
    cout<<"Presenting Level Order Traversal L---->R :"<<endl;
    Level_0rder_Traversal_Left_To_Right(root);

    cout<<"\nPresenting Level Order Traversal R----->L"<<endl;
    Level_Right_Left(root);
    return 0;
}
