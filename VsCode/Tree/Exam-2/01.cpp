//Tree --- nth inputs nodes creating


#include <iostream>

using namespace std;

// Node structure for the binary tree
struct Node 
{
    int value;
    Node* left;
    Node* right;

    Node(int val) 
	{ 
		this->value= val;
		this->left=NULL;
		this->right=NULL;
	}
};

// Function to insert a value into the binary tree
Node* insert(Node* root, int val) 
{
	//cout<<"Step-5"<<endl;
	//cout<<&root<<endl;
    if (root == nullptr) 
	{
		//cout<<"Step-5 ke just badh : "<<endl;
        return new Node(val);

    } 
	//cout<<"Step-5 ke badh : "<<endl;
	//else 

	{
        // if (val < root->value) 
		// {
			cout<<"Enter the left child : "<<val<<endl;
            root->left = insert(root->left, val);
        
		// else 
		
			cout<<"Enter the right child : "<<val<<endl;
	        root->right = insert(root->right, val);
        
    }
    return root;
}

// Function to create a binary tree with n nodes
Node* createBinaryTree(int n) 
{
	//cout<<"Step-3"<<endl;
    Node* root = nullptr;
	//cout<<&root<<endl;
    int value;
    
    for (int i = 0; i < n; i++) 
	{
		//cout<<"Step-4"<<endl;
        cout<<"Enter tha data : "<<endl;
        cin >> value;
        root = insert(root, value);
		//cout<<root->value<<"  ";
    }

   return root;
}

// Function to perform inorder traversal of the binary tree
void inorderTraversal(Node* root) {
    if (root) 
	{
        inorderTraversal(root->left);
//**************************************************************
        cout << root->value << " ";
//**************************************************************
        inorderTraversal(root->right);

    }
}

int main() {
	system("cls");
    int n;
	//cout<<"Step-1"<<endl;
    cout << "Enter the number of nodes: ";
    cin >> n;
	//cout<<"Step-2"<<endl;
    Node* treeRoot = createBinaryTree(n);

    cout << "\nInorder Traversal of the Binary Tree: ";
    inorderTraversal(treeRoot);

    return 0;
}