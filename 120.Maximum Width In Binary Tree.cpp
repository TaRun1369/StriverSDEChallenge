#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int getMaxWidth(TreeNode<int> *root)
{
    int maxi = 0;
    if(root == NULL) return 0;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        
        int siz = q.size();
        int count = 0;
        for(int i = 0;i<siz;i++){
            TreeNode<int> *node = q.front();
            q.pop();
            count++;

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);


        }
        maxi =max(maxi,count);

    }
    return maxi;
    // Write your code here.
}