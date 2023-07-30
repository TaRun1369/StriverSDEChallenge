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
        BinaryTreeNode<int> * temp = st.top();
        st.pop();
        if(!reverse) pushAll(temp->right);
        else pushAll(temp->left);
        return temp->data;
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
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    if(root == NULL) return false;
    BSTIterator l(root,false);
    BSTIterator r(root,true);
    int i = l.next();
    int j = r.next();
    while (i < j) {
      if (i + j == k)
        return true;
      else if (i + j < k)
        i = l.next();
      else
        j = r.next();
    }
    return false;
    // Write your code here
}