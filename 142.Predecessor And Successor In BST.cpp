#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
class BSTIterator{
    private:
    bool reverse = true; // true for before 
    stack<BinaryTreeNode<int> *>st;
    public:
    BSTIterator(BinaryTreeNode<int> * root,bool isreversed){
        reverse = isreversed;
        pushAll(root);
    }
    int next(){
      if (!st.empty()) {
        BinaryTreeNode<int> *temp = st.top();
        st.pop();
        if (!reverse)
          pushAll(temp->right);
        else
          pushAll(temp->left);
        return temp->data;
      }
      return -1;
    }
    private: 
    void pushAll(BinaryTreeNode<int> * root){
      for (; root != NULL;) {
            st.push(root);
            if(reverse == true) root = root->right;
            else root = root->left;
      }
    }

};
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    int prev = -1;
    int ans = -1;
    pair<int,int> ansp;
    BSTIterator l(root,false);
    ans = l.next();
    while(ans != -1){
        if(ans == key){
            break;
        }
        prev = ans;
        ans = l.next();
    } 
    ansp = make_pair(prev,l.next());

    return ansp;
    // Write your code here.
}
