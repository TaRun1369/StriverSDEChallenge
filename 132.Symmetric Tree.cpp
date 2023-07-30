bool symm(BinaryTreeNode<int>* p,BinaryTreeNode<int>* q){
    if(p == NULL && q== NULL) return true;

    return (p->data == q->data && symm(p->left,q->right) && symm(p->right,q->left));
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(root == NULL || (!root->left && !root->right)) return true;
    // return symm(root->left,root->right);

    
        return symm(root->left,root->right);
    
    return false;

    // Write your code here.    
}