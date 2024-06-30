////write a program to append new data to an existing text file.
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class node
{
    public:
    // int data;
    // node*left;
    // node*right;

    struct TreeNode
    {
        int data;
    }

    vector<vector<int>>Level_Order_Traversal(TreeNode *root)
    {
        vector<vector<int>> ans;
        if(root== NULL)
        return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int size= q.size();
            vector<int> level;

            for(int i=0; i<size; i++)
            {
                TreeNode* newone= q.front();
                q.pop();

                if(newone->left!=NULL)
                {
                    q.push(newone->left);
                }

                if(newone->right!= NULL)
                {
                    q.push(newone->right);
                }
                level.push_back(newone->data);
            }
                ans.push_back(level);
        }
                return ans;
    }

};

int main()
{
    node *root=NULL;
    root->Level_Order_Traversal(root);

}