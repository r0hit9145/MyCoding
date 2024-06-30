#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    cout<<"Welcome to c++ : yo!"<<x<<endl;
}



// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node *next;
    
//     Node(int data): data(data), next(nullptr){}
// };

// //Printing the nodes:
//     void PrintingData(Node * &head)
//     {
//         Node *currentNode= head;
//         while(currentNode!=NULL)// until or unless nullptr
//         {
//             cout<<currentNode->data<<" ";
//             // one move ahead
//             currentNode= currentNode->next;

//         }
//         cout<<endl;
//     }
    
// // void StartAtHead(Node * &head, int data)
// // {
// //     //current node
// //     Node *temp= new Node(data);
// //     temp->next=head;
// //     head=temp;
// // }

// void StartAtTail(Node * &tail, int data)
// {
//     Node *temp= new Node(data);
//     tail->next= temp;
//     tail=temp; //tail->next;
// }

// int main()
// {
//     Node *tail= new Node(10);
//     PrintingData(tail);

//     StartAtTail(tail, 12);
//     PrintingData(tail);

//     StartAtTail(tail, 15);
//     PrintingData(tail);

//     StartAtTail(tail, 18);
//     PrintingData(tail);
//     return 0;
// }







































// // #include<iostream>
// // using namespace std;

// // class Base
// // {
// //     public:
// //     void virtual Speak()
// //     {
// //         cout<<"Base Class : "<<endl;
// //     }
// // };


// // class Derived :public Base
// // {
// //     public:
// //     void Speak()
// //     {
// //         cout<<"Derived class : "<<endl;
// //     }
// // };

// // int main()
// // {
// //     Base *b;
// //     Derived d;

// //     b=&d;
// //     b->Speak();
// // }































































// // //Build a tree
// // #include<iostream>
// // #include<queue>
// // #include<climits>
// // using namespace std;

// // class node
// // {
// //     public:
// //     int data;
// //     node *left;
// //     node *right;

// //     //Constructor is called.
// //     node(int var)
// //     {
// //         this->data= var;
// //         this->left=NULL;
// //         this->right=NULL;
// //     }
// // };

// // // Creating a or build BT

// // node *BuildTree(node *root)
// // {
// //     //Data?
// //     cout<<"\nEnter the data : ";
// //     int d;
// //     cin>>d;

// //     //Base case
// //     if(d==-1)
// //     return NULL;

// //     node *temp= new node(d);

// //     //cout<<temp->data<<" ";
// //     {
        
// //     //Left or Right 
// //     cout<<"Inserting at left\n : "<<d;
// //     temp->left= BuildTree(temp->left);

// //     cout<<"\nInserting at right : "<<d;
// //     temp->right= BuildTree(temp->right);
// //     }

// //     return temp;
// // }

// // void TraversalTree_Lelft_To_Right(node *root)
// // {
// //     //which idea?, stack :)
// //     queue<node*> q;
// //     q.push(root);

// //     //Kav tak ?
// //     while(!q.empty())
// //     {
// //         root= q.front();
// //         cout<<root->data<<"  ";
// //         q.pop();

// //         if(root->left)
// //         {
// //             q.push(root->left);
// //         }

// //         if(root->right)
// //         {
// //             q.push(root->right);
// //         }
// //     }
// //     //return root;
// // }

// // //Right to left

// // void RightToLeft(node *root)
// // {
// //     queue<node*> r;
// //     r.push(root);

// //     while(!r.empty())
// //     {
// //         node *newone= r.front();
// //         cout<<newone->data<<" ";
// //         r.pop();

// //         if(newone->right)
// //         {
// //             r.push(newone->right);
// //         }

// //         if(newone->left)
// //         {
// //             r.push(newone->left);
// //         }
// //     }
// //     //return root;
// // }

// // //Preorder Traversal------->
// // void Preorder(node*root)
// // {
// //     //Base case
// //     if(root==NULL)
// //     return;
// //     else
// //     {
// //         cout<<root->data<<"  ";
// //         Preorder(root->left);
// //         Preorder(root->right);
// //     }
// // }

// // //Inorder Traversal ---------->
// // void Inorder(node*root)
// // {
// //     //Base case
// //     if(root==NULL)
// //     {
// //         return ;
// //     }

// //     else
// //     {
// //         Inorder(root->left);
// //         cout<<root->data<<" ";
// //         Inorder(root->right);
// //     }
// // }

// // //Postorder Traversal---------->
// // void Postorder(node*root)
// // {
// //     node* check= root;
// //     //Base case
// //     if(check==NULL)return ;
// //     else
// //     {
// //         Postorder(check->left);
// //         Postorder(check->right);
// //         cout<<check->data<<" ";
// //     }
// // }

// // //The tree height is that.
// // // int IsHeight(node*root)
// // // {
// // //     int ans;
// // //     //Check Root is null or not
// // //     if(root==NULL)
// // //     return 0;
// // //     else
// // //     {
// // //         int left1= IsHeight(root->left);
// // //         int right1=IsHeight(root->right);
// // //         ans= max(left1, right1)+1;
// // //         if(root->left==NULL && root->right==NULL)
// // //         {
// // //             cout<<ans;
// // //         }
        
// // //     }
// // //    // cout<<root<<" ";
// // //    //cout<<ans<<endl;
// // // }
// // // The tree height is that.
// // int IsHeight(node* root)
// // {
// //     // Check Root is null or not
// //     if (root == NULL)
// //     {
// //         return 0;
// //     }                               //Wrong!! -- during printing inside the function.
// //     else
// //     {
// //         int left1 = IsHeight(root->left);
// //         int right1 = IsHeight(root->right);
// //         int height = max(left1, right1) + 1;

// //         // Print height only for the root node
// //         if (root->left == NULL && root->right == NULL)
// //         {
// //             cout << "The tree height is : " << height << endl;
// //         }

// //         return height;
// //     }
// // }


// // int main()
// // {
// //     system("cls");
// //     //Staring passing - NULL.
// //     node *root= NULL;

// //     cout<<"Building a tree-1 "<<endl;
// //     root= BuildTree(root);

// //     cout<<"We're going to traversal the tree left to right-2 "<<endl;
// //     TraversalTree_Lelft_To_Right(root);

// //     cout<<"\nNow, Right to left-3"<<endl;
// //     RightToLeft(root);

// //     cout<<"\nPreorder Traversal- 4"<<endl;
// //     Preorder(root);

// //     cout<<"\nInorder Traversal- 5"<<endl;
// //     Inorder(root);

// //     cout<<"\n Postorder Traversal- 6"<<endl;
// //     Postorder(root);

// //     cout<<"\n The tree height is : "<<endl;
// //     IsHeight(root);

// //     // root->left= new node(9);

// //     // root->right= new node(15);
// //     // cout<<root->right->data;
// //     // root->left->left= new node(5);

// //     // root->left->right= new node(6);
    
// //     // BuildTree(root);
// // }
















































// // #include<iostream>
// // #include<climits>
// // using namespace std;

// // class node
// // {
// //     public:
// //     int data;
// //     node *left;
// //     node *right;

// //     node(int value)
// //     {
// //         this->data= value;
// //         this->left=NULL;
// //         this->right= NULL;
// //     }
// // };

// // bool isBST(node *root, int min, int max)
// // {
// //     //Base case
// //     if(root==NULL)
// //     return true;

// //     if(root->data>min && root->data<max)
// //     {
// //       bool left= isBST(root->left, min, root->data);
// //       bool right= isBST(root->right, root->data, max);

// //       return (left && right);
// //     }
// //     else 
// //     {
// //     return false;
// //     }
// // }

// // node*BuildTree(node*root)
// // {
// // int d;
// // cout<<"Enter the data :"<<endl;
// // cin>>d;
// // if(d==-1)
// // {
// //     return NULL;
// // }
// //     root=new node(d);
// //     if(root==NULL)
// //     return NULL;
// //     cout<<" enter the data in the left of ->"<<d<<endl;
// //     root->left= BuildTree(root->left);

// //     cout<<" enter the data in the right of ->"<<d<<endl;
// //     root->right= BuildTree(root->right);

// //     return root;
// // }

// // int main()
// // {
// //     node *root=NULL;

// //     root= BuildTree(root);
// //     // node *root= new node(20);

// //     // root->left= new node(11);

// //     // root->right= new node(55);

// //     // root->left->left= new node(9);

// //     // root->left->right= new node(13);

// //     int min=INT_MIN;
// //     int max= INT_MAX;

// //     bool var= isBST(root, min, max);
// //     if(var==1)
// //     cout<<"BST"<<endl;
// //     else
// //     cout<<"Not BST:"<<endl;
// // }








































// // // Tree traversal in C++

// // #include <iostream>
// // #include<stack>
// // using namespace std;

// // struct Node {
// //   int data;
// //   struct Node *left, *right;
// //   Node(int data) {
// //     this->data = data;
// //     left = right = NULL;
// //   }
// // };

// // // Preorder traversal
// // void preorderTraversal(struct Node* node) {
// //   if (node == NULL)
// //     return;

// //   cout << node->data << "->";
// //   preorderTraversal(node->left);
// //   preorderTraversal(node->right);
// // }

// // // Postorder traversal
// // void postorderTraversal(struct Node* node) {
// //   if (node == NULL)
// //     return;

// //   postorderTraversal(node->left);
// //   postorderTraversal(node->right);

// //   cout << node->data << "->";
// // }

// // // Inorder traversal
// // void inorderTraversal(struct Node* node) {
// //   if (node == NULL)
// //     return;

// //   cout<<"\nInsering left side : "<< node->data <<endl;
// //   inorderTraversal(node->left);
  
// //   cout << node->data;
// //   cout<<"\nInsering right side : "<< node->data <<endl;
// //   inorderTraversal(node->right);
// // }

// // int main() {
// //    // Node *root;
// //     stack<int> s;
// //     int i;
// //     for(int i=0; i<5; i++)
// //     {
// //         cout<<"enter node "<<i<<" Value "<<endl;
// //         int x;
// //         cin>>x;
// //         s.push(x);
// //     }
// //     while(s.empty()==false)
// //     {
// //         struct Node* root = new Node(s.top());
// //         root= new Node(s.top());
// //         inorderTraversal(root);
// //         s.pop();
// //         // root->right = new Node(s.top());
// //         // inorderTraversal(root);
// //         // s.pop();
// //     }
  
// // //   root->left = new Node(12);
// // //   root->right = new Node(9);
// // //   root->left->left = new Node(5);
// // //   root->left->right = new Node(6);

// //   cout << "Inorder traversal ";
// // //   inorderTraversal(root);

// // //   cout << "\nPreorder traversal ";
// // //   preorderTraversal(root);

// // //   cout << "\nPostorder traversal ";
// // //   postorderTraversal(root);
// // }