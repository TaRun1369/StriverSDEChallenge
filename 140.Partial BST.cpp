#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
bool help(BinaryTreeNode<int> *root,int minn,int maxx){
    if(root == NULL )return true;

    if(root->data < minn || root->data >maxx) return false;

    return help(root->left,minn,root->data) && help(root->right,root->data,maxx);
}

bool validateBST(BinaryTreeNode<int> *root) {

    return help(root,INT_MIN,INT_MAX);
    // Write your code here
}