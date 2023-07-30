
bool helper(TreeNode<int> *root,TreeNode<int> *leaf,stack<TreeNode<int> *> &st){
    if(root == NULL) return false;
    st.push(root);
    if(root->data == leaf->data) return true;
    
        
        if(helper(root->left,leaf,st) || helper(root->right,leaf,st)) return true;
    
    st.pop();
    return false;
}

TreeNode<int> * invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf)
{
    if(root == NULL ) return root;
    stack<TreeNode<int> *> st;
     if (!helper(root, leaf, st)) return root;
    // helper(root,leaf,st);

    TreeNode<int> * newN = st.top();
    st.pop();

    TreeNode<int> *parent = newN;

    while(!st.empty()){
        TreeNode<int> *curr = st.top();
        st.pop();

        if(curr->left == parent){
            curr->left = NULL;
            parent->left = curr;
        }else{
            curr->right = curr->left;
            curr->left = NULL;
            parent->left = curr;
        }
    parent = parent->left;
    }
    return newN;
    
        // Write your code here.
}
bool helper(TreeNode<int> *root,TreeNode<int> *leaf,stack<TreeNode<int> *> &st){
    if(root == NULL) return false;
    st.push(root);
    if(root->data == leaf->data) return true;
    
        
        if(helper(root->left,leaf,st) || helper(root->right,leaf,st)) return true;
    
    st.pop();
    return false;
}

TreeNode<int> * invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf)
{
    if(root == NULL ) return root;
    stack<TreeNode<int> *> st;
     if (!helper(root, leaf, st)) return root;
    // helper(root,leaf,st);

    TreeNode<int> * newN = st.top();
    st.pop();

    TreeNode<int> *parent = newN;

    while(!st.empty()){
        TreeNode<int> *curr = st.top();
        st.pop();

        if(curr->left == parent){
            curr->left = NULL;
            parent->left = curr;
        }else{
            curr->right = curr->left;
            curr->left = NULL;
            parent->left = curr;
        }
    parent = parent->left;
    }
    return newN;
    
        // Write your code here.
}