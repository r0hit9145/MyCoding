//Kth smallest element in BST Tree------------>

#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* left;
    node* right;

    node(int var)
    {
        this->data = var;
        this->left = NULL;
        this->right = NULL;
    }
};

void Inorder_Traversal(node* root)
{
    if (root == NULL)
        return;

    Inorder_Traversal(root->left);
    cout<< root->data<<"  ";
    Inorder_Traversal(root->right);
}

// Function to find the kth smallest element in the BST
int Check_smallest_kth_BST(node* root, int &i, int &k)
{
    if (root == NULL)
        return -1;

    int leftResult = Check_smallest_kth_BST(root->left, i, k);

    if (leftResult != -1)
        return leftResult;

    i++;

    if (i == k)
    {
        return root->data;
    }
    
    return Check_smallest_kth_BST(root->right, i, k);
}

int main()
{
    node* root = new node(5);
    root->left = new node(4);
    root->right = new node(8);
    root->left->left = new node(2);
    root->left->left->right = new node(3);
    root->right->left = new node(7);
    root->right->right = new node(10);

    // Inorder Traversal;
    cout << "Inorder Traversal : " << endl;
    Inorder_Traversal(root);

    int i = 0, k;

    cout << "Which term do you want to find? " << endl;
    cin >> k;

    int result = Check_smallest_kth_BST(root, i, k);

    if (result != -1)
        cout << "The " << k << "th smallest element is: " << result << endl;
    else
        cout << "Invalid k value or k is out of range." << endl;

    return 0;
}
