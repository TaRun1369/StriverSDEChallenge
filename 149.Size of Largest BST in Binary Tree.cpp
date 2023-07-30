#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
class NodeValue{

    public:
        int maxV,minV,maxS;
    NodeValue(int mi,int ma,int mas){
        this->maxV = ma;
        this->minV = mi;
        this->maxS = mas;
    }
};

NodeValue helper(TreeNode<int>* root){
    if(root == NULL){
        return NodeValue(INT_MAX,INT_MIN,0);
    }

    auto left = helper(root->left);
    auto right = helper(root->right);
    
    if(root->data>left.maxV && root->data < right.minV){
        return NodeValue(min(root->data,left.minV),max(root->data,right.maxV),1+left.maxS+right.maxS);
    }

    return NodeValue(INT_MIN,INT_MAX,max(left.maxS,right.maxS));
}

int largestBST(TreeNode<int>* root) 
{
    return helper(root).maxS;
    // Write your code here.
}
