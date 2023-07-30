#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.

    queue<BinaryTreeNode< int >* > q;
    q.push(root);

    while(!q.empty()){
        int siz = q.size();
        BinaryTreeNode< int > * start = q.front();
        q.pop();
         if(start->left) q.push(start->left);
            if(start->right) q.push(start->right);
        for(int i = 1;i<siz;i++){
            BinaryTreeNode< int > * nex = q.front();
            q.pop();
            start->next = nex;
            start = nex;
            if(nex->left) q.push(nex->left);
            if(nex->right) q.push(nex->right);
        }
    }
}