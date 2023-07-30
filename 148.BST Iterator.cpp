class BSTiterator
{
    private: stack<TreeNode<int> *>st;
    public:
    BSTiterator(TreeNode<int> *root)
    {
        pushA(root);
        // write your code here
    }


    int next()
    {
        TreeNode<int> * temp = st.top();
        st.pop();
        pushA(temp->right);
        return temp->data;
                // write your code here
    }

    bool hasNext()
    {
        return !st.empty();
        // write your code here
    }
    void pushA(TreeNode<int> * root){
        for(;root != NULL ; st.push(root),root = root->left);
    }
};
