#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
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
        TreeNode<int> * temp = st.top();
        st.pop();
        if(!reverse) pushAll(temp->right);
        else pushAll(temp->left);
        return temp->data;
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
int kthSmallest(TreeNode<int> *root, int k)
{
    if(root == NULL){
        return -1;
    }

    BSTIterator l(root,false);
    int ans;
    for(int i = 0;i<k;i++){
        ans = l.next();
    }
    return ans;
	//	Write the code here.
}