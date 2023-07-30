************************************************************/
int maximu(int &maxi,TreeNode<int> *root){
    if(root == NULL) return 0;

    
    int lh = maximu(maxi , root->left);
    int rh = maximu(maxi,root->right);

    maxi = max(maxi ,rh+lh);

    return 1+max(rh,lh); 
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
    int maxi = 0;
    int h = maximu(maxi,root);
    return maxi;
        // Write Your Code Here.
}