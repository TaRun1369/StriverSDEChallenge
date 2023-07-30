TreeNode<int> * build(vector<int> &pO,int &i,int bound){
    if(i >= pO.size() || pO[i] > bound){
        return NULL;
        
    }
    TreeNode<int> *root = new TreeNode<int> (pO[i++]);
    root->left = build(pO,i,root->data);
    root->right = build(pO,i,bound);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &pO){
    // Write your code here.
    int i = 0;
   TreeNode<int> *root  = build(pO,i,INT_MAX);
   
   return root;
    
}