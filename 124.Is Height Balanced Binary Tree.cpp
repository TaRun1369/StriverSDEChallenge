*************************************************************/
int height(BinaryTreeNode<int>* root){
    if(root == NULL) return true;

    int lh = height(root->left);
    int rh = height(root->right);

    if(lh == -1) return -1;
    if(rh == -1) return -1;

    if(abs(rh-lh) > 1) return -1;

    return 1+max(lh,rh);
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    return height(root) != -1;
}