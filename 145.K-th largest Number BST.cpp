#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
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
class BSTIterator{
    private:
    bool reverse = true; // true for before 
    stack<TreeNode<int> *>st;
    public:
    BSTIterator(TreeNode<int> * root,bool isreversed){
        reverse = isreversed;
        pushAll(root);
    }
    int next(){
        if(!st.empty()){
        TreeNode<int> * temp = st.top();
        st.pop();
        if(!reverse) pushAll(temp->right);
        else pushAll(temp->left);
        return temp->data;
        }
        return -1;
    }
    private: 
    void pushAll(TreeNode<int> * root){
      for (; root != NULL;) {
            st.push(root);
            if(reverse == true) root = root->right;
            else root = root->left;
      }
    }

};
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    if(root == NULL) return -1;
    BSTIterator r(root,true);
    int ans = -1;
    for(int i = 0;i<k;i++){
        
        ans = r.next();
    }
    return ans;
    // Write your code here.
}
