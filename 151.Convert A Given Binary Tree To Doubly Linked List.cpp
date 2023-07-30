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

void b(BinaryTreeNode<int>* root,BinaryTreeNode<int>* &prev,BinaryTreeNode<int>* &head){
    if(root == NULL) return;
    b(root->left,prev,head);
    if(prev == NULL) head = root;
    else{
        prev->right = root;
        root->left = prev;

    }
    prev = root;
    b(root->right,prev,head);
}


BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    if(root == NULL) return NULL;

    BinaryTreeNode<int>* prev = NULL;
    BinaryTreeNode<int>* head = NULL;
    b(root,prev,head);
    return head;
    

}