#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/
    // bool ans = false;

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) return false;;
    // Write your code here.
    if (x == root->data) {
    //   ans = true;
      return true;
    }
    if(x < root->data){
        return searchInBST(root->left,x);
        
    }
    if(x > root->data){
        return searchInBST(root->right,x);
       
    }
    return false;
    
}