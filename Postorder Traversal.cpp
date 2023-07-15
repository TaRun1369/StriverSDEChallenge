#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/


void Postorder(TreeNode* root,vector<int> &ans){
    if(root == NULL){
        return;
    }

    Postorder(root->left,ans);
    Postorder(root->right,ans);
        ans.emplace_back(root->data);

}

vector<int> getPostOrderTraversal(TreeNode *root)
{
     vector<int> ans;
    Postorder(root,ans);
    return ans;
    // Write your code here.
}