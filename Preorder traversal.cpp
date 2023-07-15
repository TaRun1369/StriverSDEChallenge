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

void Preorder(TreeNode* root,vector<int> &ans){
    if(root == NULL){
        return;
    }
    ans.emplace_back(root->data);

    Preorder(root->left,ans);
    Preorder(root->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    Preorder(root,ans);
    return ans;
    // Write your code here.
}