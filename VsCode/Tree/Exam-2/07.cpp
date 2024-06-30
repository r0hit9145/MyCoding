//To search a target element in binary tree
#include <iostream>

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

Node* searchBST(Node* root, int target) {
    while (root != nullptr) {
        if (target < root->key) {
            root = root->left;
        } else if (target > root->key) {
            root = root->right;
        } else {
            // Node with the target value found
            return root;
        }
    }

    // Node with the target value not found
    return nullptr;
}

// Function to delete the binary search tree and free memory
void deleteBST(Node* root) {
    if (root == nullptr) {
        return;
    }
    deleteBST(root->left);
    deleteBST(root->right);
    delete root;
}

int main() {
    // Example usage:
    // Construct a sample binary search tree
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(18);

    int target;
    std::cout << "Enter the value to search: ";
    std::cin >> target;

    Node* result = searchBST(root, target);

    if (result != NULL) {
        std::cout << "Node with value " << target << " found in the BST." << std::endl;
    } else {
        std::cout << "Node with value " << target << " not found in the BST." << std::endl;
    }

    // Don't forget to delete the allocated memory when you are done with the BST
    deleteBST(root);

    return 0;
}